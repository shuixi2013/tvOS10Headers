/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DAMailboxRequestConsumer <DAActionConsumer>
@optional
-(void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(BOOL)arg6;
-(void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(BOOL)arg6 sentBytesCount:(unsigned long long)arg7 receivedBytesCount:(unsigned long long)arg8;

@end

