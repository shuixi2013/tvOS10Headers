/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandBuffer;
@class NSString, _MTLCommandBuffer;

@interface _MTLCommandEncoder : NSObject {

	id<MTLDevice> _device;
	NSString* _label;
	_MTLCommandBuffer*<MTLCommandBuffer> _commandBuffer;
	unsigned long long _numThisEncoder;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;

}

@property (nonatomic,readonly) id<MTLDevice> device; 
@property (copy) NSString * label;                                                                           //@synthesize label=_label - In the implementation block
@property (assign,getter=globalTraceObjectID,nonatomic) unsigned long long globalTraceObjectID;              //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (getter=getType,nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long numThisEncoder;                                              //@synthesize numThisEncoder=_numThisEncoder - In the implementation block
-(unsigned long long)getType;
-(unsigned long long)globalTraceObjectID;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)setGlobalTraceObjectID:(unsigned long long)arg1 ;
-(unsigned long long)numThisEncoder;
-(void)setNumThisEncoder:(unsigned long long)arg1 ;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)endEncoding;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(id)commandBuffer;
-(id<MTLDevice>)device;
@end
