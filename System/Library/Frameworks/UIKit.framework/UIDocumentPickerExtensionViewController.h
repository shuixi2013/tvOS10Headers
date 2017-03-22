/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/_UIDocumentPickerExtensionViewController.h>

@class NSURL, NSArray, NSString;

@interface UIDocumentPickerExtensionViewController : UIViewController <_UIDocumentPickerExtensionViewController> {

	unsigned long long _documentPickerMode;
	NSURL* _originalURL;
	NSArray* _validTypes;
	NSString* _providerIdentifier;
	NSURL* _documentStorageURL;

}

@property (setter=_setUploadURL:,nonatomic,copy) NSURL * originalURL;                                   //@synthesize originalURL=_originalURL - In the implementation block
@property (setter=_setPickableTypes:,nonatomic,copy) NSArray * validTypes;                              //@synthesize validTypes=_validTypes - In the implementation block
@property (setter=_setProviderIdentifier:,nonatomic,copy) NSString * providerIdentifier;                //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (setter=_setDocumentStorageURL:,nonatomic,copy) NSURL * documentStorageURL;                   //@synthesize documentStorageURL=_documentStorageURL - In the implementation block
@property (assign,setter=_setPickerMode:,nonatomic) unsigned long long documentPickerMode;              //@synthesize documentPickerMode=_documentPickerMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)_setTintColor:(id)arg1 ;
-(void)_setPickableTypes:(id)arg1 ;
-(void)_setPickerMode:(unsigned long long)arg1 ;
-(void)_setUploadURLWrapper:(id)arg1 ;
-(unsigned long long)documentPickerMode;
-(void)_documentPickerDidDismiss;
-(void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)documentStorageURL;
-(void)_setUploadURL:(id)arg1 ;
-(void)_setDocumentStorageURL:(id)arg1 ;
-(void)_setProviderIdentifier:(id)arg1 ;
-(void)prepareForPresentationInMode:(unsigned long long)arg1 ;
-(void)dismissGrantingAccessToURL:(id)arg1 ;
-(void)prepareForDocumentSelectionInMode:(unsigned long long)arg1 ;
-(NSURL *)originalURL;
-(NSArray *)validTypes;
-(NSString *)providerIdentifier;
@end

