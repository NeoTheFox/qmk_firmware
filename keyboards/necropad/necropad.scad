module case() {
    difference() {
        union() {
	    hull(){
	        translate([-14,-5,0]) cube([14,29,24]);
	        translate([0,-25,0]) cube([85, 30, 24]);
	    }
            cube([85, 105, 15]);
	}
        translate([5,5,4]) cube([75, 95, 100]); //This is the open part 
	translate([2,-23,-0.1]) #cube([80, 125, 13]);
	translate([-10,-7.2,-0.1]) cube([12, 30, 23.5]);
	translate([5,-25,35]) rotate([-50, 0, 0]) cube([75,100,50]);
	translate([-29,2, 11.1]) #hull(){
	    translate([0,0,0]) rotate([0,90,0]) cylinder(h=50, d=9.3);
	    translate([0,10,0]) rotate([0,90,0]) cylinder(h=50, d=9.3);
	}
	translate([-5,-7.2,-0.1]) #cube([12, 30, 23.5]);
    }
    
}

case();
