#!/usr/bin/env bash

#!/usr/bin/env bash

__main__ () {
	local script

	for script in ./test-*.sh; do
		echo "\$ $script"
		"$script"
		echo
	done

}

__main__
