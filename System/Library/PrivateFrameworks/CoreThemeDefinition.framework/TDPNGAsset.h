/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDPNGAsset : TDAsset {

	int _exifOrientation;
	unsigned _fileScaleFactor;

}

@property (nonatomic,retain) NSSet * renditions; 
@property (assign,nonatomic) BOOL rawData; 
-(int)exifOrientation;
-(unsigned)fileScaleFactor;
-(void)_logError:(id)arg1 ;
-(CGSize)sourceImageSizeWithDocument:(id)arg1 ;
-(id)sourceImageWithDocument:(id)arg1 ;
-(void)setFileScaleFactor:(unsigned)arg1 ;
-(BOOL)hasCursorProduction;
-(BOOL)hasProduction;
@end

