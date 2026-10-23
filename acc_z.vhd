library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- ACC (8-bit) and Z flag. R is not needed because Set 1 has no STA/LDR.
entity ACC_Z is
    Port ( CLK    : in  STD_LOGIC;
           RESET  : in  STD_LOGIC;
           ACC_WE : in  STD_LOGIC;
           Z_WE   : in  STD_LOGIC;
           D_IN   : in  STD_LOGIC_VECTOR(7 downto 0);   -- ALU result
           Q      : out STD_LOGIC_VECTOR(7 downto 0);   -- ACC
           Z      : out STD_LOGIC);
end ACC_Z;

architecture Behavioral of ACC_Z is
    signal acc_reg : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal z_reg   : STD_LOGIC := '1';
begin
    process(CLK)
    begin
        if rising_edge(CLK) then
            if RESET = '1' then
                acc_reg <= (others => '0');
                z_reg   <= '1';
            else
                if ACC_WE = '1' then
                    acc_reg <= D_IN;
                end if;
                if Z_WE = '1' then
                    if D_IN = "00000000" then z_reg <= '1';
                    else                      z_reg <= '0';
                    end if;
                end if;
            end if;
        end if;
    end process;
    Q <= acc_reg;
    Z <= z_reg;
end Behavioral;
