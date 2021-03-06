/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DeferredFrameworkLoader : NSObject {

	NSString* _path;
	void* _frameworkHandle;
	long long _frameworkLoadedToken;

}

@property (nonatomic,retain) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) void* frameworkHandle;                       //@synthesize frameworkHandle=_frameworkHandle - In the implementation block
@property (assign,nonatomic) long long frameworkLoadedToken;              //@synthesize frameworkLoadedToken=_frameworkLoadedToken - In the implementation block
+(id)PhotosUIFrameworkPath;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(Class)classFromString:(id)arg1 ;
-(void*)frameworkHandle;
-(void)setFrameworkHandle:(void*)arg1 ;
-(long long)frameworkLoadedToken;
-(void)setFrameworkLoadedToken:(long long)arg1 ;
@end

