/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSJSMessagePortDelegate.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol VSMessagePortFeatureDelegate;
@class NSString, IKAppContext;

@interface VSMessagePortFeature : NSObject <VSJSMessagePortDelegate, IKDOMFeature> {

	NSString* _featureName;
	IKAppContext* _appContext;
	id<VSMessagePortFeatureDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VSMessagePortFeatureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                 //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                            //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(NSString *)featureName;
-(void)setDelegate:(id<VSMessagePortFeatureDelegate>)arg1 ;
-(id<VSMessagePortFeatureDelegate>)delegate;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(IKAppContext *)appContext;
-(void)messagePort:(id)arg1 didReceiveMessage:(id)arg2 ;
@end

