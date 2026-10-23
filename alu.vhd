library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity ALU is
    Port ( A       : in  STD_LOGIC_VECTOR(7 downto 0);  -- ACC
           B       : in  STD_LOGIC_VECTOR(7 downto 0);  -- 8-bit operand
           ALU_SEL : in  STD_LOGIC_VECTOR(2 downto 0);
           RESULT  : out STD_LOGIC_VECTOR(7 downto 0));
end ALU;

architecture Behavioral of ALU is
begin
    process(A, B, ALU_SEL)
    begin
        case ALU_SEL is
            when "000"  => RESULT <= B;                                                  -- LDI
            when "001"  => RESULT <= std_logic_vector(unsigned(A) + unsigned(B));        -- ADD
            when "010"  => RESULT <= std_logic_vector(unsigned(A) - unsigned(B));        -- SUB (mod 256)
            when "011"  => RESULT <= A and B;                                            -- AND
            when "100"  => RESULT <= A or B;                                             -- OR
            when others => RESULT <= A;
        end case;
    end process;
end Behavioral;
