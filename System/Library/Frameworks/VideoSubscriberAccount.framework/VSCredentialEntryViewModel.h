/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSCuratedViewModel.h>

@class NSArray, NSURL, NSString;

@interface VSCredentialEntryViewModel : VSCuratedViewModel {

	BOOL _needsUpdateValidationButtonState;
	NSArray* _fields;
	NSURL* _linkURL;
	NSString* _linkTitle;
	NSArray* _originalFieldTextValues;

}

@property (assign,nonatomic) BOOL needsUpdateValidationButtonState;              //@synthesize needsUpdateValidationButtonState=_needsUpdateValidationButtonState - In the implementation block
@property (nonatomic,retain) NSArray * originalFieldTextValues;                  //@synthesize originalFieldTextValues=_originalFieldTextValues - In the implementation block
@property (nonatomic,copy) NSArray * fields;                                     //@synthesize fields=_fields - In the implementation block
@property (nonatomic,copy) NSURL * linkURL;                                      //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,copy) NSString * linkTitle;                                 //@synthesize linkTitle=_linkTitle - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSURL *)linkURL;
-(NSArray *)fields;
-(void)_stopObservingFields:(id)arg1 ;
-(NSArray *)originalFieldTextValues;
-(void)setNeedsUpdateValidationButtonState:(BOOL)arg1 ;
-(BOOL)needsUpdateValidationButtonState;
-(void)_updateValidationButtonState;
-(void)_setNeedsUpdateValidationButtonState;
-(void)setOriginalFieldTextValues:(NSArray *)arg1 ;
-(void)_startObservingFields:(id)arg1 ;
-(void)setFields:(NSArray *)arg1 ;
-(NSString *)linkTitle;
-(void)setLinkURL:(NSURL *)arg1 ;
-(void)setLinkTitle:(NSString *)arg1 ;
@end

