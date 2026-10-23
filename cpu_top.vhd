library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity CPU_Top is
    Port ( CLK    : in  STD_LOGIC;
           RESET  : in  STD_LOGIC;
           Q      : out STD_LOGIC_VECTOR(7 downto 0);
           Z      : out STD_LOGIC;
           PC_OUT : out STD_LOGIC_VECTOR(3 downto 0));
end CPU_Top;

architecture Structural of CPU_Top is
    component PC is
        Port ( CLK : in STD_LOGIC; RESET : in STD_LOGIC;
               PC_OUT : out STD_LOGIC_VECTOR(3 downto 0));
    end component;
    component Program_ROM is
        Port ( ADDR : in STD_LOGIC_VECTOR(3 downto 0);
               INSTR : out STD_LOGIC_VECTOR(11 downto 0));
    end component;
    component Control_Unit is
        Port ( OPCODE : in STD_LOGIC_VECTOR(3 downto 0);
               ALU_SEL : out STD_LOGIC_VECTOR(2 downto 0);
               ACC_WE : out STD_LOGIC; Z_WE : out STD_LOGIC);
    end component;
    component ALU is
        Port ( A : in STD_LOGIC_VECTOR(7 downto 0);
               B : in STD_LOGIC_VECTOR(7 downto 0);
               ALU_SEL : in STD_LOGIC_VECTOR(2 downto 0);
               RESULT : out STD_LOGIC_VECTOR(7 downto 0));
    end component;
    component ACC_Z is
        Port ( CLK : in STD_LOGIC; RESET : in STD_LOGIC;
               ACC_WE : in STD_LOGIC; Z_WE : in STD_LOGIC;
               D_IN : in STD_LOGIC_VECTOR(7 downto 0);
               Q : out STD_LOGIC_VECTOR(7 downto 0);
               Z : out STD_LOGIC);
    end component;

    signal pc_s    : STD_LOGIC_VECTOR(3 downto 0);
    signal instr_s : STD_LOGIC_VECTOR(11 downto 0);
    signal sel_s   : STD_LOGIC_VECTOR(2 downto 0);
    signal acc_we_s, z_we_s : STD_LOGIC;
    signal res_s, acc_s     : STD_LOGIC_VECTOR(7 downto 0);
begin
    u_pc  : PC          port map (CLK, RESET, pc_s);
    u_rom : Program_ROM port map (pc_s, instr_s);
    u_cu  : Control_Unit port map (instr_s(11 downto 8), sel_s, acc_we_s, z_we_s);
    u_alu : ALU         port map (acc_s, instr_s(7 downto 0), sel_s, res_s);
    u_acc : ACC_Z       port map (CLK, RESET, acc_we_s, z_we_s, res_s, acc_s, Z);

    Q      <= acc_s;
    PC_OUT <= pc_s;
end Structural;
