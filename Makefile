.PHONY: clean All

All:
	@echo "----------Building project:[ 23-03-windows - Debug ]----------"
	@cd "23-03-windows" && "$(MAKE)" -f  "23-03-windows.mk"
clean:
	@echo "----------Cleaning project:[ 23-03-windows - Debug ]----------"
	@cd "23-03-windows" && "$(MAKE)" -f  "23-03-windows.mk" clean
