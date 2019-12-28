all:
	    platformio -f run

upload:
	    platformio -f run --target upload -v

clean:
	    platformio -f run --target clean

program:
	    platformio -f run --target program

uploadfs:
	    platformio -f run --target uploadfs

update:
	    platformio -f update

monitor:
	platformio device monitor -p /dev/ttyUSB0 -b 9600
