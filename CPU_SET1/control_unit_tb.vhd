library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity control_unit_tb is
end control_unit_tb;


architecture sim of control_unit_tb is
   signal opcode  : std_logic_vector(3 downto 0) := "0000";
   signal alu_sel : std_logic_vector(2 downto 0);
   signal acc_we  : std_logic;
   signal z_we    : std_logic;


   procedure check(signal op : out std_logic_vector(3 downto 0);
                   signal s  : in  std_logic_vector(2 downto 0);
                   signal a  : in  std_logic;
                   signal z  : in  std_logic;
                   code      : in  std_logic_vector(3 downto 0);
                   exp_sel   : in  std_logic_vector(2 downto 0);
                   exp_we    : in  std_logic;
                   name      : in  string) is
   begin
      op <= code;
      wait for 10 ns;
      assert s = exp_sel report name & ": wrong alu_sel" severity error;
      assert a = exp_we  report name & ": wrong acc_we"  severity error;
      assert z = exp_we  report name & ": wrong z_we"    severity error;
   end procedure;
begin
   uut : entity work.Control_Unit
      port map (OPCODE => opcode, ALU_SEL => alu_sel, ACC_WE => acc_we, Z_WE => z_we);


   stim : process
   begin
      check(opcode, alu_sel, acc_we, z_we, "0001", "000", '1', "LDI");
      check(opcode, alu_sel, acc_we, z_we, "0010", "001", '1', "ADD");
      check(opcode, alu_sel, acc_we, z_we, "0011", "010", '1', "SUB");
      check(opcode, alu_sel, acc_we, z_we, "0100", "011", '1', "AND");
      check(opcode, alu_sel, acc_we, z_we, "0101", "100", '1', "OR");
      check(opcode, alu_sel, acc_we, z_we, "0000", "000", '0', "NOP 0000");
      check(opcode, alu_sel, acc_we, z_we, "0110", "000", '0', "unused 0110");
      check(opcode, alu_sel, acc_we, z_we, "1111", "000", '0', "unused 1111");
      report "control_unit_tb finished" severity note;
      wait;
   end process;
end sim;