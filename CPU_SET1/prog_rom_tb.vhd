library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity prog_rom_tb is
end prog_rom_tb;


architecture sim of prog_rom_tb is
   signal addr  : std_logic_vector(3 downto 0) := (others => '0');
   signal instr : std_logic_vector(11 downto 0);


   type word_arr is array (0 to 15) of std_logic_vector(11 downto 0);
   constant EXPECTED : word_arr := (
      0      => x"13C",
      1      => x"20F",
      2      => x"30B",
      3      => x"4F0",
      4      => x"50A",
      5      => x"34A",
      6      => x"301",
      others => x"000");
begin
   uut : entity work.Program_ROM port map (ADDR => addr, INSTR => instr);


   stim : process
   begin
      for i in 0 to 15 loop
         addr <= std_logic_vector(to_unsigned(i, 4));
         wait for 10 ns;
         assert instr = EXPECTED(i)
            report "ROM mismatch at address " & integer'image(i) severity error;
      end loop;
      report "prog_rom_tb finished" severity note;
      wait;
   end process;
end sim;