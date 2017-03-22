/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHFacePropertySet.h>

@class PHFaceprint;

@interface PHFaceClusteringProperties : PHFacePropertySet {

	PHFaceprint* _faceprint;

}

@property (nonatomic,readonly) PHFaceprint * faceprint;              //@synthesize faceprint=_faceprint - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(PHFaceprint *)faceprint;
-(id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3 ;
@end

