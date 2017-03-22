/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CSLFeature.h>

@class NSString, NSNumber;

@interface CSLNGramFeature : CSLFeature {

	BOOL _isStopWord;
	NSString* _token;
	NSNumber* _position;
	NSNumber* _size;
	NSString* _originalForm;

}

@property (nonatomic,retain) NSString * token;                     //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSNumber * position;                  //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) NSNumber * size;                      //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * originalForm;              //@synthesize originalForm=_originalForm - In the implementation block
@property (assign) BOOL isStopWord;                                //@synthesize isStopWord=_isStopWord - In the implementation block
-(NSNumber *)size;
-(id)init;
-(id)description;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setPosition:(NSNumber *)arg1 ;
-(NSNumber *)position;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(BOOL)isStopWord;
-(NSString *)originalForm;
-(id)initWithKey:(id)arg1 fromSource:(id)arg2 withWeight:(double)arg3 token:(id)arg4 position:(id)arg5 size:(id)arg6 originalForm:(id)arg7 isStopWord:(BOOL)arg8 ;
-(void)setOriginalForm:(NSString *)arg1 ;
-(void)setIsStopWord:(BOOL)arg1 ;
@end
