	else if ((c[2] == '-'))
		len += ft_flag_bonus(args, c);
	else if ((c[2] == '#' && (c[3] == 'x' || c[3] == 'X')))
		len += ft_flag_bonus(args, c, flag);
	else if ((c[2] == ' '))
		len += ft_flag_bonus(args, c);
	else if ((c[2] == '+'))
		len += ft_flag_bonus(args, c);