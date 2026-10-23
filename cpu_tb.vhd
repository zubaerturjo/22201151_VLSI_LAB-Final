library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity CPU_TB is
end CPU_TB;

architecture Behavioral of CPU_TB is
    component CPU_Top is
        Port ( CLK : in STD_LOGIC; RESET : in STD_LOGIC;
               Q : out STD_LOGIC_VECTOR(7 downto 0);
               Z : out STD_LOGIC;
               PC_OUT : out STD_LOGIC_VECTOR(3 downto 0));
    end component;
    signal CLK    : STD_LOGIC := '0';
    signal RESET  : STD_LOGIC := '1';
    signal Q      : STD_LOGIC_VECTOR(7 downto 0);
    signal Z      : STD_LOGIC;
    signal PC_OUT : STD_LOGIC_VECTOR(3 downto 0);
    constant T : time := 10 ns;
    signal done : boolean := false;
begin
    uut : CPU_Top port map (CLK, RESET, Q, Z, PC_OUT);

    clk_proc : process
    begin
        while not done loop
            CLK <= '0'; wait for T/2;
            CLK <= '1'; wait for T/2;
        end loop;
        wait;
    end process;

    stim : process
    begin
        RESET <= '1';
        wait for T;          -- one rising edge with RESET = 1 (at 5 ns)
        wait for 1 ns;
        RESET <= '0';        -- released after that edge
        wait for 7 * T;      -- 7 instructions (LDI, ADD, SUB, AND, OR, SUB, SUB)
        done <= true;
        wait;
    end process;
end Behavioral;
