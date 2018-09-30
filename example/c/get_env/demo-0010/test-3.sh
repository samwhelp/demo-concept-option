#!/usr/bin/env bash

__main__ () {
	local exp_val="force_use_unar: yes"
	local the_val=`FORCE_USE_UNAR=true ./demo`


	if [ "$the_val" = "$exp_val" ]; then
		echo 'Match: Yes'
	else
		echo 'Match: No'
	fi

}

__main__
