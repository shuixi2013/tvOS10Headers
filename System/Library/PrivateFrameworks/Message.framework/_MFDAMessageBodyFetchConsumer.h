/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFRequestQueueResponseConsumer.h>
#import <libobjc.A.dylib/DAMailAccountStreamConsumerFactory.h>

@protocol MFDAStreamingContentConsumer;
@class MFError, NSData, NSString;

@interface _MFDAMessageBodyFetchConsumer : NSObject <MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory> {

	id<MFDAStreamingContentConsumer> _streamConsumer;
	BOOL _succeeded;
	MFError* _error;
	NSData* _data;
	BOOL _hasLocalCopyOfData;

}

@property (nonatomic,retain) id<MFDAStreamingContentConsumer> streamConsumer;              //@synthesize streamConsumer=_streamConsumer - In the implementation block
@property (nonatomic,readonly) BOOL succeeded;                                             //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,retain) MFError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * data;                                                //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL hasLocalCopyOfData;                                      //@synthesize hasLocalCopyOfData=_hasLocalCopyOfData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(void)setStreamConsumer:(id<MFDAStreamingContentConsumer>)arg1 ;
-(BOOL)succeeded;
-(BOOL)hasLocalCopyOfData;
-(BOOL)wantsData;
-(void)setHasLocalCopyOfData:(BOOL)arg1 ;
-(id<MFDAStreamingContentConsumer>)streamConsumer;
-(id)streamingContentConsumer;
@end

