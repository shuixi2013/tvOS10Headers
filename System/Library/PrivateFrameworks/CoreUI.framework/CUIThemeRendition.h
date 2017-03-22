/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSData;

@interface CUIThemeRendition : NSObject {

	renditionkeytoken _stackKey[17];
	renditionkeytoken* _key;
	long long _type;
	unsigned _subtype;
	unsigned _scale;
	struct {
		unsigned isHeaderFlaggedFPO : 1;
		unsigned isExcludedFromContrastFilter : 1;
		unsigned isVectorBased : 1;
		unsigned isOpaque : 1;
		unsigned bitmapEncoding : 4;
		unsigned optOutOfThinning : 1;
		unsigned isFlippable : 1;
		unsigned otherImageProvider : 1;
		unsigned isTintable : 1;
		unsigned reserved : 20;
	}  _renditionFlags;
	long long _templateRenderingMode;
	long long _artworkStatus;
	unsigned long long _colorSpaceID;
	NSString* _name;
	NSData* _srcData;
	long long _validLookGradation;
	double _opacity;
	int _blendMode;
	NSString* _utiType;
	int _exifOrientation;
	CGImageRef _uncroppedImage;

}

@property (assign,nonatomic) double opacity;                   //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                    //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) int exifOrientation;              //@synthesize exifOrientation=_exifOrientation - In the implementation block
+(id)displayNameForRenditionType:(long long)arg1 ;
+(id)filteredCSIDataFromBaseCSIData:(id)arg1 ;
+(Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned)arg2 ;
-(id)packedContents;
-(id)layerReferences;
-(CGImageRef)unslicedImage;
-(id)linkingToRendition;
-(BOOL)optOutOfThinning;
-(BOOL)isTintable;
-(unsigned)gradientStyle;
-(unsigned long long)colorSpaceID;
-(BOOL)isVectorBased;
-(id)effectPreset;
-(void)_initializeRenditionKey:(const renditionkeytoken*)arg1 ;
-(unsigned short)valueForTokenIdentifier:(unsigned short)arg1 ;
-(BOOL)isTiled;
-(id)imageForSliceIndex:(long long)arg1 ;
-(BOOL)isScaled;
-(id)maskForSliceIndex:(long long)arg1 ;
-(BOOL)edgesOnly;
-(id)sliceInformation;
-(double)gradientDrawingAngle;
-(id)externalTags;
-(id)provideTextureInfo;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(BOOL)isHeaderFlaggedFPO;
-(long long)artworkStatus;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)_initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(CGImageRef)createImageFromPDFRenditionWithScale:(double)arg1 ;
-(CGSize)unslicedSize;
-(id)assetPackIdentifier;
-(id)mipLevels;
-(id)textureImages;
-(void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1 ;
-(BOOL)isInternalLink;
-(void)_initializeCompositingOptionsFromCSIData:(const csiheader*)arg1 ;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(int)bitmapEncoding;
-(BOOL)isValidForLookGradation:(long long)arg1 ;
-(CGImageRef)uncroppedImage;
-(void)dealloc;
-(id)description;
-(id)name;
-(const renditionkeytoken*)key;
-(long long)type;
-(unsigned)subtype;
-(double)scale;
-(id)data;
-(int)exifOrientation;
-(long long)templateRenderingMode;
-(BOOL)isOpaque;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(id)utiType;
-(id)metrics;
-(id)gradient;
-(BOOL)isFlippable;
-(void)setExifOrientation:(int)arg1 ;
-(CGPDFDocumentRef)pdfDocument;
-(int)pixelFormat;
-(CGSize)originalUncroppedSize;
-(CGRect)alphaCroppedRect;
@end

