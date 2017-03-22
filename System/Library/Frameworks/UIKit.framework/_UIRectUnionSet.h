/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableData;

@interface _UIRectUnionSet : NSObject {

	NSMutableData* _data;
	unsigned long long _rectCount;
	CGRect _cachedUnionRect;

}

@property (readonly) CGRect unionedRect; 
@property (readonly) unsigned long long count; 
-(unsigned long long)count;
-(id)init;
-(CGRect)unionedRect;
-(void)addRect:(CGRect)arg1 ;
-(void)removeRect:(CGRect)arg1 ;
@end

