// Generated by Haxe 3.3.0

#pragma warning disable 109, 114, 219, 429, 168, 162
namespace thx {
	public class Enums : global::haxe.lang.HxObject {
		
		public Enums(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Enums() {
			global::thx.Enums.__hx_ctor_thx_Enums(this);
		}
		
		
		public static void __hx_ctor_thx_Enums(global::thx.Enums __temp_me86) {
		}
		
		
		public static string @string<T>(T e) {
			string cons = global::Type.enumConstructor(e);
			global::Array<object> @params = new global::Array<object>(new object[]{});
			{
				int _g = 0;
				global::Array _g1 = global::Type.enumParameters(e);
				while (( global::haxe.lang.Runtime.compare(_g, ((int) (global::haxe.lang.Runtime.getField_f(_g1, "length", 520590566, true)) )) < 0 )) {
					object param = _g1[_g];
					 ++ _g;
					@params.push(global::thx.Dynamics.@string(param));
				}
				
			}
			
			return global::haxe.lang.Runtime.concat(cons, (( (( @params.length == 0 )) ? ("") : (global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("(", @params.@join(", ")), ")")) )));
		}
		
		
		public static int compare<T>(T a, T b) {
			int v = ( global::Type.enumIndex(a) - global::Type.enumIndex(b) );
			if (( v != 0 )) {
				return v;
			}
			
			return global::thx.Arrays.compare<object>(((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::Type.enumParameters(a)) ))) ), ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (global::Type.enumParameters(b)) ))) ));
		}
		
		
		public static bool sameConstructor<T>(T a, T b) {
			return ( global::Type.enumIndex(a) == global::Type.enumIndex(b) );
		}
		
		
		public static T min<T>(T a, T b) {
			if (( global::thx.Enums.compare<T>(global::haxe.lang.Runtime.genericCast<T>(a), global::haxe.lang.Runtime.genericCast<T>(b)) < 0 )) {
				return a;
			}
			else {
				return b;
			}
			
		}
		
		
		public static T max<T>(T a, T b) {
			if (( global::thx.Enums.compare<T>(global::haxe.lang.Runtime.genericCast<T>(a), global::haxe.lang.Runtime.genericCast<T>(b)) > 0 )) {
				return a;
			}
			else {
				return b;
			}
			
		}
		
		
		public static new object __hx_createEmpty() {
			return new global::thx.Enums(global::haxe.lang.EmptyObject.EMPTY);
		}
		
		
		public static new object __hx_create(global::Array arr) {
			return new global::thx.Enums();
		}
		
		
	}
}


