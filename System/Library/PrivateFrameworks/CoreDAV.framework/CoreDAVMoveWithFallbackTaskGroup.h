/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSString, NSData, NSDictionary;

@interface CoreDAVMoveWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSURL* _sourceURL;
	NSURL* _destinationURL;
	NSString* _previousETag;
	BOOL _useFallback;
	int _overwrite;
	NSData* _dataPayload;
	NSString* _dataContentType;
	NSDictionary* _responseHeaders;
	NSString* _nextETag;

}

@property (nonatomic,readonly) NSURL * sourceURL;                           //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                      //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) int overwrite;                                 //@synthesize overwrite=_overwrite - In the implementation block
@property (assign,nonatomic) BOOL useFallback;                              //@synthesize useFallback=_useFallback - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                       //@synthesize previousETag=_previousETag - In the implementation block
@property (nonatomic,retain) NSData * dataPayload;                          //@synthesize dataPayload=_dataPayload - In the implementation block
@property (nonatomic,retain) NSString * dataContentType;                    //@synthesize dataContentType=_dataContentType - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHeaders;              //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (nonatomic,readonly) NSString * nextETag;                         //@synthesize nextETag=_nextETag - In the implementation block
-(void)dealloc;
-(id)description;
-(NSURL *)sourceURL;
-(void)_completedMoveTask:(id)arg1 ;
-(void)_completedPutTask:(id)arg1 ;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 AccountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(BOOL)useFallback;
-(void)setUseFallback:(BOOL)arg1 ;
-(void)setDataPayload:(NSData *)arg1 ;
-(void)setDataContentType:(NSString *)arg1 ;
-(NSURL *)destinationURL;
-(NSData *)dataPayload;
-(NSDictionary *)responseHeaders;
-(void)startTaskGroup;
-(NSString *)previousETag;
-(void)setPreviousETag:(NSString *)arg1 ;
-(NSString *)dataContentType;
-(NSString *)nextETag;
-(void)setOverwrite:(int)arg1 ;
-(int)overwrite;
@end

