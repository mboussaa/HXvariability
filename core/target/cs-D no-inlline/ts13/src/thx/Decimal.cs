// Generated by Haxe 3.3.0

#pragma warning disable 109, 114, 219, 429, 168, 162
namespace thx._Decimal {
	public sealed class Decimal_Impl_ {
		
		static Decimal_Impl_() {
			global::thx._Decimal.Decimal_Impl_.zero = global::thx.bigint.DecimalImpl.zero;
			global::thx._Decimal.Decimal_Impl_.one = global::thx.bigint.DecimalImpl.one;
		}
		
		
		
		
		public static global::thx.bigint.DecimalImpl zero;
		
		public static global::thx.bigint.DecimalImpl one;
		
		public static global::thx.bigint.DecimalImpl fromInt64(long @value) {
			return new global::thx.bigint.DecimalImpl(global::thx.bigint.Bigs.fromInt64(@value), 0);
		}
		
		
		public static global::thx.bigint.DecimalImpl fromBigInt(global::thx.bigint.BigIntImpl @value) {
			return new global::thx.bigint.DecimalImpl(@value, 0);
		}
		
		
		public static global::thx.bigint.DecimalImpl fromInt(int @value) {
			return global::thx.bigint.Decimals.fromInt(@value);
		}
		
		
		public static global::thx.bigint.DecimalImpl fromFloat(double @value) {
			return global::thx.bigint.Decimals.fromFloat(@value);
		}
		
		
		public static global::thx.bigint.DecimalImpl fromString(string @value) {
			return global::thx.bigint.Decimals.parse(@value);
		}
		
		
		public static global::thx.bigint.DecimalImpl randomBetween(global::thx.bigint.DecimalImpl a, global::thx.bigint.DecimalImpl b) {
			return global::thx.bigint.DecimalImpl.randomBetween(a, b);
		}
		
		
		public static int compare(global::thx.bigint.DecimalImpl a, global::thx.bigint.DecimalImpl b) {
			return ((global::thx.bigint.DecimalImpl) (a) ).compareTo(b);
		}
		
		
		public static bool isZero(global::thx.bigint.DecimalImpl this1) {
			return this1.isZero();
		}
		
		
		public static global::thx.bigint.DecimalImpl abs(global::thx.bigint.DecimalImpl this1) {
			return this1.abs();
		}
		
		
		public static int compareTo(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return this1.compareTo(that);
		}
		
		
		public static int compareAbs(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return this1.compareToAbs(that);
		}
		
		
		public static global::thx.bigint.DecimalImpl next(global::thx.bigint.DecimalImpl this1) {
			return this1.next();
		}
		
		
		public static global::thx.bigint.DecimalImpl prev(global::thx.bigint.DecimalImpl this1) {
			return this1.prev();
		}
		
		
		public static global::thx.bigint.DecimalImpl square(global::thx.bigint.DecimalImpl this1) {
			return this1.square();
		}
		
		
		public static global::thx.bigint.DecimalImpl pow(global::thx.bigint.DecimalImpl this1, int exp) {
			return this1.pow(exp);
		}
		
		
		public static bool isEven(global::thx.bigint.DecimalImpl this1) {
			return this1.isEven();
		}
		
		
		public static bool isOdd(global::thx.bigint.DecimalImpl this1) {
			return this1.isOdd();
		}
		
		
		public static bool isNegative(global::thx.bigint.DecimalImpl this1) {
			return this1.isNegative();
		}
		
		
		public static bool isPositive(global::thx.bigint.DecimalImpl this1) {
			return ( this1.compareTo(global::thx._Decimal.Decimal_Impl_.zero) > 0 );
		}
		
		
		public static global::thx.bigint.DecimalImpl max(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			if (global::thx._Decimal.Decimal_Impl_.greater(this1, that)) {
				return this1;
			}
			else {
				return that;
			}
			
		}
		
		
		public static global::thx.bigint.DecimalImpl min(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			if (global::thx._Decimal.Decimal_Impl_.less(this1, that)) {
				return this1;
			}
			else {
				return that;
			}
			
		}
		
		
		public static global::thx.bigint.DecimalImpl ceil(global::thx.bigint.DecimalImpl this1) {
			return this1.ceilTo(0);
		}
		
		
		public static global::thx.bigint.DecimalImpl ceilTo(global::thx.bigint.DecimalImpl this1, int decimals) {
			return this1.ceilTo(decimals);
		}
		
		
		public static global::thx.bigint.DecimalImpl floor(global::thx.bigint.DecimalImpl this1) {
			return this1.floorTo(0);
		}
		
		
		public static global::thx.bigint.DecimalImpl floorTo(global::thx.bigint.DecimalImpl this1, int decimals) {
			return this1.floorTo(decimals);
		}
		
		
		public static global::thx.bigint.DecimalImpl round(global::thx.bigint.DecimalImpl this1) {
			return this1.roundTo(0);
		}
		
		
		public static global::thx.bigint.DecimalImpl roundTo(global::thx.bigint.DecimalImpl this1, int decimals) {
			return this1.roundTo(decimals);
		}
		
		
		public static global::thx.bigint.DecimalImpl scaleTo(global::thx.bigint.DecimalImpl this1, int decimals) {
			return this1.scaleTo(decimals);
		}
		
		
		public static global::thx.bigint.DecimalImpl trim(global::thx.bigint.DecimalImpl this1, global::haxe.lang.Null<int> mindecimals) {
			return this1.trim(mindecimals);
		}
		
		
		public static bool greaterThan(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return ( ((global::thx.bigint.DecimalImpl) (this1) ).compareTo(that) > 0 );
		}
		
		
		public static bool greater(global::thx.bigint.DecimalImpl self, global::thx.bigint.DecimalImpl that) {
			return ( ((global::thx.bigint.DecimalImpl) (self) ).compareTo(that) > 0 );
		}
		
		
		public static bool greaterEqualsTo(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return ( ((global::thx.bigint.DecimalImpl) (this1) ).compareTo(that) >= 0 );
		}
		
		
		public static bool greaterEquals(global::thx.bigint.DecimalImpl self, global::thx.bigint.DecimalImpl that) {
			return ( ((global::thx.bigint.DecimalImpl) (self) ).compareTo(that) >= 0 );
		}
		
		
		public static bool lessThan(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return ( ((global::thx.bigint.DecimalImpl) (this1) ).compareTo(that) < 0 );
		}
		
		
		public static bool less(global::thx.bigint.DecimalImpl self, global::thx.bigint.DecimalImpl that) {
			return ( ((global::thx.bigint.DecimalImpl) (self) ).compareTo(that) < 0 );
		}
		
		
		public static bool lessEqualsTo(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return ( ((global::thx.bigint.DecimalImpl) (this1) ).compareTo(that) <= 0 );
		}
		
		
		public static bool lessEquals(global::thx.bigint.DecimalImpl self, global::thx.bigint.DecimalImpl that) {
			return ( ((global::thx.bigint.DecimalImpl) (self) ).compareTo(that) <= 0 );
		}
		
		
		public static bool equalsTo(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return ( ((global::thx.bigint.DecimalImpl) (this1) ).compareTo(that) == 0 );
		}
		
		
		public static bool @equals(global::thx.bigint.DecimalImpl self, global::thx.bigint.DecimalImpl that) {
			return ( ((global::thx.bigint.DecimalImpl) (self) ).compareTo(that) == 0 );
		}
		
		
		public static bool notEqualsTo(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return ( ((global::thx.bigint.DecimalImpl) (this1) ).compareTo(that) != 0 );
		}
		
		
		public static bool notEquals(global::thx.bigint.DecimalImpl self, global::thx.bigint.DecimalImpl that) {
			return ( ((global::thx.bigint.DecimalImpl) (self) ).compareTo(that) != 0 );
		}
		
		
		public static global::thx.bigint.DecimalImpl @add(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return this1.@add(that);
		}
		
		
		public static global::thx.bigint.DecimalImpl subtract(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return this1.subtract(that);
		}
		
		
		public static global::thx.bigint.DecimalImpl negate(global::thx.bigint.DecimalImpl this1) {
			return this1.negate();
		}
		
		
		public static global::thx.bigint.DecimalImpl preIncrement(global::thx.bigint.DecimalImpl this1) {
			this1 = ((global::thx.bigint.DecimalImpl) (((global::thx.bigint.DecimalImpl) (this1) ).@add(global::thx._Decimal.Decimal_Impl_.one)) );
			return this1;
		}
		
		
		public static global::thx.bigint.DecimalImpl postIncrement(global::thx.bigint.DecimalImpl this1) {
			global::thx.bigint.DecimalImpl v = this1;
			this1 = ((global::thx.bigint.DecimalImpl) (((global::thx.bigint.DecimalImpl) (this1) ).@add(global::thx._Decimal.Decimal_Impl_.one)) );
			return v;
		}
		
		
		public static global::thx.bigint.DecimalImpl preDecrement(global::thx.bigint.DecimalImpl this1) {
			this1 = ((global::thx.bigint.DecimalImpl) (((global::thx.bigint.DecimalImpl) (this1) ).subtract(global::thx._Decimal.Decimal_Impl_.one)) );
			return this1;
		}
		
		
		public static global::thx.bigint.DecimalImpl postDecrement(global::thx.bigint.DecimalImpl this1) {
			global::thx.bigint.DecimalImpl v = this1;
			this1 = ((global::thx.bigint.DecimalImpl) (((global::thx.bigint.DecimalImpl) (this1) ).subtract(global::thx._Decimal.Decimal_Impl_.one)) );
			return v;
		}
		
		
		public static global::thx.bigint.DecimalImpl multiply(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return this1.multiply(that);
		}
		
		
		public static global::thx.bigint.DecimalImpl divide(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return this1.divide(that);
		}
		
		
		public static global::thx.bigint.DecimalImpl modulo(global::thx.bigint.DecimalImpl this1, global::thx.bigint.DecimalImpl that) {
			return this1.modulo(that);
		}
		
		
		public static int toInt(global::thx.bigint.DecimalImpl this1) {
			return this1.toInt();
		}
		
		
		public static long toInt64(global::thx.bigint.DecimalImpl this1) {
			return global::thx.bigint.Bigs.toInt64(((global::thx.bigint.BigIntImpl) (global::thx._Decimal.Decimal_Impl_.toBigInt(this1)) ));
		}
		
		
		public static global::thx.bigint.BigIntImpl toBigInt(global::thx.bigint.DecimalImpl this1) {
			return this1.@value.divide(global::thx.bigint.Small.ten.pow(global::thx.bigint.Bigs.fromInt(this1.scale)));
		}
		
		
		public static double toFloat(global::thx.bigint.DecimalImpl this1) {
			return this1.toFloat();
		}
		
		
		public static string toString(global::thx.bigint.DecimalImpl this1) {
			return this1.toString();
		}
		
		
		public static int get_divisionScale() {
			return global::thx.bigint.Decimals.divisionExtraScale;
		}
		
		
		public static int set_divisionScale(int v) {
			return global::thx.bigint.Decimals.divisionExtraScale = v;
		}
		
		
	}
}


