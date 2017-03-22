/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/CNContactPickerServiceProtocol.h>
#import <libobjc.A.dylib/CNContactPickerHostProtocol.h>

@class CNContactPickerHostViewController, NSString;

@interface CNContactPickerExtensionHostContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol> {

	CNContactPickerHostViewController* _viewController;

}

@property (assign,nonatomic,__weak) CNContactPickerHostViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(void)setViewController:(CNContactPickerHostViewController *)arg1 ;
-(CNContactPickerHostViewController *)viewController;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
-(void)pickerDidSelectContact:(id)arg1 property:(id)arg2 ;
-(void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2 ;
-(void)pickerDidCancel;
@end

