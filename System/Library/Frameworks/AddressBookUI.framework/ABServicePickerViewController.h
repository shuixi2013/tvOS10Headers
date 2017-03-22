/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/ABPickerViewController.h>
#import <libobjc.A.dylib/ABSimpleTextInputViewControllerDelegate.h>

@class NSString, NSArray, NSIndexPath;

@interface ABServicePickerViewController : ABPickerViewController <ABSimpleTextInputViewControllerDelegate> {

	NSString* _selectedService;
	NSString* _customService;
	NSArray* _defaultServices;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,copy) NSString * selectedService;              //@synthesize selectedService=_selectedService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultService;
+(id)defaultServices;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setStyleProvider:(id)arg1 ;
-(void)setSelectedService:(NSString *)arg1 ;
-(void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2 ;
-(id)selectServiceTitle;
-(id)addCustomServiceButtonLabel;
-(id)addCustomServiceTitle;
-(id)addCustomServicePlaceholder;
-(NSString *)selectedService;
@end

