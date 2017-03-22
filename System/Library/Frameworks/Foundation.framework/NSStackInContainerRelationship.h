/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRelationship.h>

@class NSArray, NSLayoutRect, NSString;

@interface NSStackInContainerRelationship : NSObject <NSLayoutRelationship> {

	NSArray* _stackedRects;
	NSLayoutRect* _containingRect;
	double _spacing;
	long long _orientation;

}

@property (copy,readonly) NSLayoutRect * containingRect;                   //@synthesize containingRect=_containingRect - In the implementation block
@property (copy,readonly) NSArray * stackedRects;                          //@synthesize stackedRects=_stackedRects - In the implementation block
@property (readonly) double spacing;                                       //@synthesize spacing=_spacing - In the implementation block
@property (readonly) long long orientation;                                //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * relationshipDescription; 
+(id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 inContainer:(id)arg3 spacing:(double)arg4 ;
+(id)horizontalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3 ;
+(id)verticalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3 ;
-(id)makeChildrenRelationships;
-(NSString *)relationshipDescription;
-(NSArray *)stackedRects;
-(id)initWithOrientation:(long long)arg1 stackedRects:(id)arg2 containingRect:(id)arg3 spacing:(double)arg4 ;
-(NSLayoutRect *)containingRect;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(long long)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)spacing;
@end

