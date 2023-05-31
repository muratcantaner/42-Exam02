unsigned char	swap_bits(unsigned char octet)
{
	unsigned char tmp = octet << 4;
	tmp += octet >> 4;

	return tmp;
}
