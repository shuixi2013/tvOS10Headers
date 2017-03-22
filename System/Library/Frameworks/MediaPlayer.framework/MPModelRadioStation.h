/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelRadioStation : MPModelObject {

	BOOL _beats1;
	NSString* _name;
	NSString* _editorNotes;
	NSString* _shortEditorNotes;
	/*^block*/id _artworkCatalogBlock;

}

@property (assign,getter=isBeats1,nonatomic) BOOL beats1;              //@synthesize beats1=_beats1 - In the implementation block
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * editorNotes;                     //@synthesize editorNotes=_editorNotes - In the implementation block
@property (nonatomic,copy) NSString * shortEditorNotes;                //@synthesize shortEditorNotes=_shortEditorNotes - In the implementation block
@property (nonatomic,copy) id artworkCatalogBlock;                     //@synthesize artworkCatalogBlock=_artworkCatalogBlock - In the implementation block
+(id)__artworkCatalogBlock__KEY;
+(id)__beats1__KEY;
+(id)__MPModelPropertyRadioStationBeats1__PROPERTY;
+(id)__name__KEY;
+(id)__MPModelPropertyRadioStationName__PROPERTY;
+(id)__editorNotes__KEY;
+(id)__MPModelPropertyRadioStationEditorNotes__PROPERTY;
+(id)__shortEditorNotes__KEY;
+(id)__MPModelPropertyRadioStationShortEditorNotes__PROPERTY;
+(id)__MPModelPropertyRadioStationArtwork__PROPERTY;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)descriptionWithType:(long long)arg1 ;
-(BOOL)isBeats1;
-(NSString *)editorNotes;
-(NSString *)shortEditorNotes;
-(id)artworkCatalog;
-(void)setBeats1:(BOOL)arg1 ;
-(void)setEditorNotes:(NSString *)arg1 ;
-(void)setShortEditorNotes:(NSString *)arg1 ;
-(void)setArtworkCatalogBlock:(id)arg1 ;
-(id)artworkCatalogBlock;
@end

