library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity pc_tb is
end pc_tb;


architecture sim of pc_tb is
   signal clk    : std_logic := '0';
   signal reset  : std_logic := '1';
   signal pc_out : std_logic_vector(3 downto 0);
   signal done   : boolean := false;
begin
   uut : entity work.PC port map (CLK => clk, RESET => reset, PC_OUT => pc_out);


   clk_proc : process
   begin
      while not done loop
         clk <= '0'; wait for 5 ns;
         clk <= '1'; wait for 5 ns;
      end loop;
      wait;
   end process;


   stim : process
   begin
      -- initial reset: held for one rising edge (5 ns)
      wait until rising_edge(clk); wait for 1 ns;
      assert unsigned(pc_out) = 0 report "PC not 0 after reset" severity error;
      reset <= '0';


      -- count 1 to 6
      for i in 1 to 6 loop
         wait until rising_edge(clk); wait for 1 ns;
         assert to_integer(unsigned(pc_out)) = i
            report "PC count error, expected " & integer'image(i) severity error;
      end loop;


      -- reset in the middle of counting
      reset <= '1';
      wait until rising_edge(clk); wait for 1 ns;
      assert unsigned(pc_out) = 0 report "PC not 0 after second reset" severity error;
      reset <= '0';


      -- counter restarts from 0
      for i in 1 to 3 loop
         wait until rising_edge(clk); wait for 1 ns;
         assert to_integer(unsigned(pc_out)) = i
            report "PC restart error, expected " & integer'image(i) severity error;
      end loop;


      report "pc_tb finished" severity note;
      done <= true;
      wait;
   end process;
end sim;