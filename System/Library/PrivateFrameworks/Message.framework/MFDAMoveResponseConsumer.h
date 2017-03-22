/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <libobjc.A.dylib/DAMessageMoveRequestConsumer.h>

@class NSSet, NSMutableDictionary, NSMutableSet, MFError;

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer> {

	NSSet* _messagesIDs;
	NSMutableDictionary* _newRemoteIDsByMessageID;
	NSMutableSet* _failures;
	MFError* _error;

}

@property (nonatomic,retain) MFError * error;              //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
-(id)initWithMessageIDs:(id)arg1 newRemoteIDsByMessageID:(id)arg2 failures:(id)arg3 ;
-(void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3 ;
-(void)resultsForMessageMove:(id)arg1 ;
@end

