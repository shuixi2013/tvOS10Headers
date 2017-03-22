/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyCell.h>

@class UILabel;

@interface CNPropertySimpleCell : CNPropertyCell {

	UILabel* _labelLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,readonly) UILabel * labelLabel;              //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
-(id)valueView;
-(UILabel *)valueLabel;
-(id)labelView;
-(UILabel *)labelLabel;
@end

