
int getSerialNumber(void)
{	
	static int count;
	
	return ++count;
}
