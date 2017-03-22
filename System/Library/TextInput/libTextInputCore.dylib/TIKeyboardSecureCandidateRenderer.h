/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, CAContext, NSString;

@interface TIKeyboardSecureCandidateRenderer : NSObject {

	NSMutableDictionary* _secureCandidateCache;
	CAContext* _context;
	NSString* _localeIdentifier;
	NSMutableDictionary* _accessibilityLabelCache;

}

@property (nonatomic,retain) NSMutableDictionary * secureCandidateCache;              //@synthesize secureCandidateCache=_secureCandidateCache - In the implementation block
@property (nonatomic,retain,readonly) CAContext * context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain,readonly) NSString * localeIdentifier;                    //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
+(id)allRenderers;
-(void)dealloc;
-(id)init;
-(CAContext *)context;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(NSString *)localeIdentifier;
-(id)localizedStringForKey:(id)arg1 ;
-(void)clearSecureCandidateCache;
-(id)cachedCandidateForSecureCandidate:(id)arg1 ;
-(NSMutableDictionary *)secureCandidateCache;
-(void)setSecureCandidateCache:(NSMutableDictionary *)arg1 ;
@end
