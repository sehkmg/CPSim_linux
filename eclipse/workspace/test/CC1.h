var:0

input:0

output:1
internal_data[4]

CAN_input:1				//you don't need to change this part
0:0x7FD:1
car_output[SPEED]

CAN_output:0

code:
{
	internal_data[4] = car_output[SPEED];
	return 0;
}
