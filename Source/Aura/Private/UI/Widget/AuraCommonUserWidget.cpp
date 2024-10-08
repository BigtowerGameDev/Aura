// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Widget/AuraCommonUserWidget.h"

void UAuraCommonUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
