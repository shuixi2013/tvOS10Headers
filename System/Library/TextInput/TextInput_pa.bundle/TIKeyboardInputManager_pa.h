/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/TextInput/TextInput_pa.bundle/TextInput_pa
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_pa : TIKeyboardInputManagerZephyr
+(id)decompositionMap;
+(id)compositionMap;
-(id)replacementForDoubleSpace;
-(BOOL)doesComposeText;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(id)sentenceDelimitingCharacters;
@end

