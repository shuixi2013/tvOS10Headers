/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNObserver.h>

@class CNObservableContractEnforcement, NSString;

@interface _CNBlockObserver : NSObject <CNObserver> {

	/*^block*/id _resultBlock;
	/*^block*/id _completionBlock;
	/*^block*/id _failureBlock;
	CNObservableContractEnforcement* _enforcement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidReceiveResult:(id)arg1 ;
-(id)initWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
@end

