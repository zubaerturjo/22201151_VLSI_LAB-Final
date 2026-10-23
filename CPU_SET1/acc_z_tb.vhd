library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity acc_z_tb is
end acc_z_tb;


architecture sim of acc_z_tb is
   signal clk    : std_logic := '0';
   signal reset  : std_logic := '1';
   signal acc_we : std_logic := '0';
   signal z_we   : std_logic := '0';
   signal d_in   : std_logic_vector(7 downto 0) := (others => '0');
   signal q      : std_logic_vector(7 downto 0);
   signal z      : std_logic;
   signal done   : boolean := false;
begin
   uut : entity work.ACC_Z
      port map (CLK => clk, RESET => reset, ACC_WE => acc_we, Z_WE => z_we,
                D_IN => d_in, Q => q, Z => z);


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
      -- reset: ACC = 0, Z = 1
      wait until rising_edge(clk); wait for 1 ns;
      assert q = x"00" and z = '1' report "reset error" severity error;
      reset <= '0';


      -- load 0x3C: ACC = 0x3C, Z = 0
      d_in <= x"3C"; acc_we <= '1'; z_we <= '1';
      wait until rising_edge(clk); wait for 1 ns;
      assert q = x"3C" and z = '0' report "load 0x3C error" severity error;


      -- hold (WE = 0) with D = 0x00: ACC and Z must not change
      d_in <= x"00"; acc_we <= '0'; z_we <= '0';
      wait until rising_edge(clk); wait for 1 ns;
      assert q = x"3C" and z = '0' report "hold with D = 0 error" severity error;


      -- load 0x00: ACC = 0x00, Z = 1
      acc_we <= '1'; z_we <= '1';
      wait until rising_edge(clk); wait for 1 ns;
      assert q = x"00" and z = '1' report "load 0x00 error" severity error;


      -- hold (WE = 0) with D = 0xFF: ACC and Z must not change
      d_in <= x"FF"; acc_we <= '0'; z_we <= '0';
      wait until rising_edge(clk); wait for 1 ns;
      assert q = x"00" and z = '1' report "hold with D = 0xFF error" severity error;


      -- load 0xFF: ACC = 0xFF, Z = 0
      acc_we <= '1'; z_we <= '1';
      wait until rising_edge(clk); wait for 1 ns;
      assert q = x"FF" and z = '0' report "load 0xFF error" severity error;


      -- second reset
      acc_we <= '0'; z_we <= '0'; reset <= '1';
      wait until rising_edge(clk); wait for 1 ns;
      assert q = x"00" and z = '1' report "second reset error" severity error;


      report "acc_z_tb finished" severity note;
      done <= true;
      wait;
   end process;
end sim;