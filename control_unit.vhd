library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Control_Unit is
    Port ( OPCODE  : in  STD_LOGIC_VECTOR(3 downto 0);
           ALU_SEL : out STD_LOGIC_VECTOR(2 downto 0);
           ACC_WE  : out STD_LOGIC;
           Z_WE    : out STD_LOGIC);
end Control_Unit;

architecture Behavioral of Control_Unit is
begin
    process(OPCODE)
    begin
        -- defaults = NOP (nothing changes)
        ALU_SEL <= "000";
        ACC_WE  <= '0';
        Z_WE    <= '0';
        case OPCODE is
            when "0001" => ALU_SEL <= "000"; ACC_WE <= '1'; Z_WE <= '1'; -- LDI
            when "0010" => ALU_SEL <= "001"; ACC_WE <= '1'; Z_WE <= '1'; -- ADD
            when "0011" => ALU_SEL <= "010"; ACC_WE <= '1'; Z_WE <= '1'; -- SUB
            when "0100" => ALU_SEL <= "011"; ACC_WE <= '1'; Z_WE <= '1'; -- AND
            when "0101" => ALU_SEL <= "100"; ACC_WE <= '1'; Z_WE <= '1'; -- OR
            when others => null;                                         -- NOP
        end case;
    end process;
end Behavioral;
