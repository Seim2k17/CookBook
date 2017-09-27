#pragma once

UENUM()
enum Status
{
	Stopped UMETA(DisplayName = "Stopped"),
	Moving UMETA(DisplayName = "Moving"),
	Attack UMETA(DisplayName = "Attack"),
};
