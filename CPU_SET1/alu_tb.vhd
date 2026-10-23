library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity alu_tb is
end alu_tb;


architecture sim of alu_tb is
   signal a, b   : std_logic_vector(7 downto 0) := (others => '0');
   signal sel    : std_logic_vector(2 downto 0) := "000";
   signal result : std_logic_vector(7 downto 0);
begin
   uut : entity work.ALU port map (A => a, B => b, ALU_SEL => sel, RESULT => result);


   stim : process
      procedure test(av, bv : in std_logic_vector(7 downto 0);
                     s      : in std_logic_vector(2 downto 0);
                     expv   : in std_logic_vector(7 downto 0);
                     name   : in string) is
      begin
         a <= av; b <= bv; sel <= s;
         wait for 10 ns;
         assert result = expv report "ALU error: " & name severity error;
      end procedure;
   begin
      test(x"55", x"3C", "000", x"3C", "LDI 0x3C");
      test(x"3C", x"0F", "001", x"4B", "ADD 0x3C + 0x0F");
      test(x"FF", x"01", "001", x"00", "ADD wrap 0xFF + 0x01");
      test(x"4B", x"0B", "010", x"40", "SUB 0x4B - 0x0B");
      test(x"4A", x"4A", "010", x"00", "SUB 0x4A - 0x4A");
      test(x"00", x"01", "010", x"FF", "SUB wrap 0x00 - 0x01");
      test(x"40", x"F0", "011", x"40", "AND 0x40 and 0xF0");
      test(x"FF", x"0F", "011", x"0F", "AND 0xFF and 0x0F");
      test(x"40", x"0A", "100", x"4A", "OR 0x40 or 0x0A");
      test(x"F0", x"0F", "100", x"FF", "OR 0xF0 or 0x0F");
      test(x"A5", x"5A", "111", x"A5", "unused select passes A");
      report "alu_tb finished" severity note;
      wait;
   end process;
end sim;