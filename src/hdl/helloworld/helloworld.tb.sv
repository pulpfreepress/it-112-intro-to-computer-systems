

module helloworld_testbench ();

    reg in_a;
    reg in_b;
    reg in_c;

    wire out_y;

    helloworld dut(
        .a (in_a), 
        .b (in_b), 
        .c (in_c), 
        .y (out_y)
        
    );

    initial begin
        in_a = 1'b0;
        forever #1 in_a = ~in_a;
    end
    
    initial begin
        in_b = 1'b0;
        in_c = 1'b0;
        #20
        $display(out_y);
        in_b = 1'b1;
        #20
        $display(out_y);
        in_c = 1'b1;
        #20
        $display(out_y);
        in_b = 1'b0;
        in_c = 1'b1;
        $display(out_y);
        $dumpfile("dump.vcd");
      	$dumpvars;
        $finish;
    end

endmodule