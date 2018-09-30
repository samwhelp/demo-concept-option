#!/usr/bin/env bash

__main__ () {
	local exp_val="force_use_unar: no"


	cp config.number.2.ini config.ini
	local the_val=`./demo`


	if [ "$the_val" = "$exp_val" ]; then
		echo 'Match: Yes'
	else
		echo 'Match: No'
	fi

}

__main__
