// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FLATBUFFERS_GAME_THELASTONE_H_
#define FLATBUFFERS_GENERATED_FLATBUFFERS_GAME_THELASTONE_H_

#include "flatbuffers/flatbuffers.h"

namespace Game {
	namespace TheLastOne {

		struct Vec3;

		struct Client_Collection;

		struct Client_info;

		struct Zombie_Collection;

		struct Zombie_info;

		struct Game_Items;

		struct Gameitem;

		struct GameDangerLine;

		struct Game_Timer;

		struct Client_Packet;

		struct Game_HP_Set;

		MANUALLY_ALIGNED_STRUCT(4) Vec3 FLATBUFFERS_FINAL_CLASS {
		private:
			float x_;
			float y_;
			float z_;

		public:
			Vec3() {
				memset(this, 0, sizeof(Vec3));
			}
			Vec3(float _x, float _y, float _z)
				: x_(flatbuffers::EndianScalar(_x)),
				y_(flatbuffers::EndianScalar(_y)),
				z_(flatbuffers::EndianScalar(_z)) {
			}
			float x() const {
				return flatbuffers::EndianScalar(x_);
			}
			float y() const {
				return flatbuffers::EndianScalar(y_);
			}
			float z() const {
				return flatbuffers::EndianScalar(z_);
			}
		};
		STRUCT_END(Vec3, 12);

		struct Client_Collection FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
			enum {
				VT_DATA = 4
			};
			const flatbuffers::Vector<flatbuffers::Offset<Client_info>> *data() const {
				return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Client_info>> *>(VT_DATA);
			}
			bool Verify(flatbuffers::Verifier &verifier) const {
				return VerifyTableStart(verifier) &&
					VerifyOffset(verifier, VT_DATA) &&
					verifier.Verify(data()) &&
					verifier.VerifyVectorOfTables(data()) &&
					verifier.EndTable();
			}
		};

		struct Client_CollectionBuilder {
			flatbuffers::FlatBufferBuilder &fbb_;
			flatbuffers::uoffset_t start_;
			void add_data(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Client_info>>> data) {
				fbb_.AddOffset(Client_Collection::VT_DATA, data);
			}
			explicit Client_CollectionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
				: fbb_(_fbb) {
				start_ = fbb_.StartTable();
			}
			Client_CollectionBuilder &operator=(const Client_CollectionBuilder &);
			flatbuffers::Offset<Client_Collection> Finish() {
				const auto end = fbb_.EndTable(start_);
				auto o = flatbuffers::Offset<Client_Collection>(end);
				return o;
			}
		};

		inline flatbuffers::Offset<Client_Collection> CreateClient_Collection(
			flatbuffers::FlatBufferBuilder &_fbb,
			flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Client_info>>> data = 0) {
			Client_CollectionBuilder builder_(_fbb);
			builder_.add_data(data);
			return builder_.Finish();
		}

		inline flatbuffers::Offset<Client_Collection> CreateClient_CollectionDirect(
			flatbuffers::FlatBufferBuilder &_fbb,
			const std::vector<flatbuffers::Offset<Client_info>> *data = nullptr) {
			return Game::TheLastOne::CreateClient_Collection(
				_fbb,
				data ? _fbb.CreateVector<flatbuffers::Offset<Client_info>>(*data) : 0);
		}

		struct Client_info FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
			enum {
				VT_ID = 4,
				VT_HP = 6,
				VT_ARMOUR = 8,
				VT_ANIMATOR = 10,
				VT_HORIZONTAL = 12,
				VT_VERTICAL = 14,
				VT_INCAR = 16,
				VT_NAME = 18,
				VT_POSITION = 20,
				VT_ROTATION = 22,
				VT_CARROTATION = 24,
				VT_CARKMH = 26,
				VT_DANGERLINEIN = 28,
				VT_NOWWEAPON = 30
			};
			int32_t id() const {
				return GetField<int32_t>(VT_ID, 0);
			}
			int32_t hp() const {
				return GetField<int32_t>(VT_HP, 0);
			}
			int32_t armour() const {
				return GetField<int32_t>(VT_ARMOUR, 0);
			}
			int32_t animator() const {
				return GetField<int32_t>(VT_ANIMATOR, 0);
			}
			float Horizontal() const {
				return GetField<float>(VT_HORIZONTAL, 0.0f);
			}
			float Vertical() const {
				return GetField<float>(VT_VERTICAL, 0.0f);
			}
			int32_t inCar() const {
				return GetField<int32_t>(VT_INCAR, 0);
			}
			const flatbuffers::String *name() const {
				return GetPointer<const flatbuffers::String *>(VT_NAME);
			}
			const Vec3 *position() const {
				return GetStruct<const Vec3 *>(VT_POSITION);
			}
			const Vec3 *rotation() const {
				return GetStruct<const Vec3 *>(VT_ROTATION);
			}
			const Vec3 *carrotation() const {
				return GetStruct<const Vec3 *>(VT_CARROTATION);
			}
			float carkmh() const {
				return GetField<float>(VT_CARKMH, 0.0f);
			}
			bool dangerLineIn() const {
				return GetField<uint8_t>(VT_DANGERLINEIN, 0) != 0;
			}
			int32_t nowWeapon() const {
				return GetField<int32_t>(VT_NOWWEAPON, 0);
			}
			bool Verify(flatbuffers::Verifier &verifier) const {
				return VerifyTableStart(verifier) &&
					VerifyField<int32_t>(verifier, VT_ID) &&
					VerifyField<int32_t>(verifier, VT_HP) &&
					VerifyField<int32_t>(verifier, VT_ARMOUR) &&
					VerifyField<int32_t>(verifier, VT_ANIMATOR) &&
					VerifyField<float>(verifier, VT_HORIZONTAL) &&
					VerifyField<float>(verifier, VT_VERTICAL) &&
					VerifyField<int32_t>(verifier, VT_INCAR) &&
					VerifyOffset(verifier, VT_NAME) &&
					verifier.Verify(name()) &&
					VerifyField<Vec3>(verifier, VT_POSITION) &&
					VerifyField<Vec3>(verifier, VT_ROTATION) &&
					VerifyField<Vec3>(verifier, VT_CARROTATION) &&
					VerifyField<float>(verifier, VT_CARKMH) &&
					VerifyField<uint8_t>(verifier, VT_DANGERLINEIN) &&
					VerifyField<int32_t>(verifier, VT_NOWWEAPON) &&
					verifier.EndTable();
			}
		};

		struct Client_infoBuilder {
			flatbuffers::FlatBufferBuilder &fbb_;
			flatbuffers::uoffset_t start_;
			void add_id(int32_t id) {
				fbb_.AddElement<int32_t>(Client_info::VT_ID, id, 0);
			}
			void add_hp(int32_t hp) {
				fbb_.AddElement<int32_t>(Client_info::VT_HP, hp, 0);
			}
			void add_armour(int32_t armour) {
				fbb_.AddElement<int32_t>(Client_info::VT_ARMOUR, armour, 0);
			}
			void add_animator(int32_t animator) {
				fbb_.AddElement<int32_t>(Client_info::VT_ANIMATOR, animator, 0);
			}
			void add_Horizontal(float Horizontal) {
				fbb_.AddElement<float>(Client_info::VT_HORIZONTAL, Horizontal, 0.0f);
			}
			void add_Vertical(float Vertical) {
				fbb_.AddElement<float>(Client_info::VT_VERTICAL, Vertical, 0.0f);
			}
			void add_inCar(int32_t inCar) {
				fbb_.AddElement<int32_t>(Client_info::VT_INCAR, inCar, 0);
			}
			void add_name(flatbuffers::Offset<flatbuffers::String> name) {
				fbb_.AddOffset(Client_info::VT_NAME, name);
			}
			void add_position(const Vec3 *position) {
				fbb_.AddStruct(Client_info::VT_POSITION, position);
			}
			void add_rotation(const Vec3 *rotation) {
				fbb_.AddStruct(Client_info::VT_ROTATION, rotation);
			}
			void add_carrotation(const Vec3 *carrotation) {
				fbb_.AddStruct(Client_info::VT_CARROTATION, carrotation);
			}
			void add_carkmh(float carkmh) {
				fbb_.AddElement<float>(Client_info::VT_CARKMH, carkmh, 0.0f);
			}
			void add_dangerLineIn(bool dangerLineIn) {
				fbb_.AddElement<uint8_t>(Client_info::VT_DANGERLINEIN, static_cast<uint8_t>(dangerLineIn), 0);
			}
			void add_nowWeapon(int32_t nowWeapon) {
				fbb_.AddElement<int32_t>(Client_info::VT_NOWWEAPON, nowWeapon, 0);
			}
			explicit Client_infoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
				: fbb_(_fbb) {
				start_ = fbb_.StartTable();
			}
			Client_infoBuilder &operator=(const Client_infoBuilder &);
			flatbuffers::Offset<Client_info> Finish() {
				const auto end = fbb_.EndTable(start_);
				auto o = flatbuffers::Offset<Client_info>(end);
				return o;
			}
		};

		inline flatbuffers::Offset<Client_info> CreateClient_info(
			flatbuffers::FlatBufferBuilder &_fbb,
			int32_t id = 0,
			int32_t hp = 0,
			int32_t armour = 0,
			int32_t animator = 0,
			float Horizontal = 0.0f,
			float Vertical = 0.0f,
			int32_t inCar = 0,
			flatbuffers::Offset<flatbuffers::String> name = 0,
			const Vec3 *position = 0,
			const Vec3 *rotation = 0,
			const Vec3 *carrotation = 0,
			float carkmh = 0.0f,
			bool dangerLineIn = false,
			int32_t nowWeapon = 0) {
			Client_infoBuilder builder_(_fbb);
			builder_.add_nowWeapon(nowWeapon);
			builder_.add_carkmh(carkmh);
			builder_.add_carrotation(carrotation);
			builder_.add_rotation(rotation);
			builder_.add_position(position);
			builder_.add_name(name);
			builder_.add_inCar(inCar);
			builder_.add_Vertical(Vertical);
			builder_.add_Horizontal(Horizontal);
			builder_.add_animator(animator);
			builder_.add_armour(armour);
			builder_.add_hp(hp);
			builder_.add_id(id);
			builder_.add_dangerLineIn(dangerLineIn);
			return builder_.Finish();
		}

		inline flatbuffers::Offset<Client_info> CreateClient_infoDirect(
			flatbuffers::FlatBufferBuilder &_fbb,
			int32_t id = 0,
			int32_t hp = 0,
			int32_t armour = 0,
			int32_t animator = 0,
			float Horizontal = 0.0f,
			float Vertical = 0.0f,
			int32_t inCar = 0,
			const char *name = nullptr,
			const Vec3 *position = 0,
			const Vec3 *rotation = 0,
			const Vec3 *carrotation = 0,
			float carkmh = 0.0f,
			bool dangerLineIn = false,
			int32_t nowWeapon = 0) {
			return Game::TheLastOne::CreateClient_info(
				_fbb,
				id,
				hp,
				armour,
				animator,
				Horizontal,
				Vertical,
				inCar,
				name ? _fbb.CreateString(name) : 0,
				position,
				rotation,
				carrotation,
				carkmh,
				dangerLineIn,
				nowWeapon);
		}

		struct Zombie_Collection FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
			enum {
				VT_DATA = 4
			};
			const flatbuffers::Vector<flatbuffers::Offset<Zombie_info>> *data() const {
				return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Zombie_info>> *>(VT_DATA);
			}
			bool Verify(flatbuffers::Verifier &verifier) const {
				return VerifyTableStart(verifier) &&
					VerifyOffset(verifier, VT_DATA) &&
					verifier.Verify(data()) &&
					verifier.VerifyVectorOfTables(data()) &&
					verifier.EndTable();
			}
		};

		struct Zombie_CollectionBuilder {
			flatbuffers::FlatBufferBuilder &fbb_;
			flatbuffers::uoffset_t start_;
			void add_data(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Zombie_info>>> data) {
				fbb_.AddOffset(Zombie_Collection::VT_DATA, data);
			}
			explicit Zombie_CollectionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
				: fbb_(_fbb) {
				start_ = fbb_.StartTable();
			}
			Zombie_CollectionBuilder &operator=(const Zombie_CollectionBuilder &);
			flatbuffers::Offset<Zombie_Collection> Finish() {
				const auto end = fbb_.EndTable(start_);
				auto o = flatbuffers::Offset<Zombie_Collection>(end);
				return o;
			}
		};

		inline flatbuffers::Offset<Zombie_Collection> CreateZombie_Collection(
			flatbuffers::FlatBufferBuilder &_fbb,
			flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Zombie_info>>> data = 0) {
			Zombie_CollectionBuilder builder_(_fbb);
			builder_.add_data(data);
			return builder_.Finish();
		}

		inline flatbuffers::Offset<Zombie_Collection> CreateZombie_CollectionDirect(
			flatbuffers::FlatBufferBuilder &_fbb,
			const std::vector<flatbuffers::Offset<Zombie_info>> *data = nullptr) {
			return Game::TheLastOne::CreateZombie_Collection(
				_fbb,
				data ? _fbb.CreateVector<flatbuffers::Offset<Zombie_info>>(*data) : 0);
		}

		struct Zombie_info FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
			enum {
				VT_ID = 4,
				VT_HP = 6,
				VT_ANIMATOR = 8,
				VT_TARGETPLAYER = 10,
				VT_POSITION = 12,
				VT_ROTATION = 14
			};
			int32_t id() const {
				return GetField<int32_t>(VT_ID, 0);
			}
			int32_t hp() const {
				return GetField<int32_t>(VT_HP, 0);
			}
			int32_t animator() const {
				return GetField<int32_t>(VT_ANIMATOR, 0);
			}
			int32_t targetPlayer() const {
				return GetField<int32_t>(VT_TARGETPLAYER, 0);
			}
			const Vec3 *position() const {
				return GetStruct<const Vec3 *>(VT_POSITION);
			}
			const Vec3 *rotation() const {
				return GetStruct<const Vec3 *>(VT_ROTATION);
			}
			bool Verify(flatbuffers::Verifier &verifier) const {
				return VerifyTableStart(verifier) &&
					VerifyField<int32_t>(verifier, VT_ID) &&
					VerifyField<int32_t>(verifier, VT_HP) &&
					VerifyField<int32_t>(verifier, VT_ANIMATOR) &&
					VerifyField<int32_t>(verifier, VT_TARGETPLAYER) &&
					VerifyField<Vec3>(verifier, VT_POSITION) &&
					VerifyField<Vec3>(verifier, VT_ROTATION) &&
					verifier.EndTable();
			}
		};

		struct Zombie_infoBuilder {
			flatbuffers::FlatBufferBuilder &fbb_;
			flatbuffers::uoffset_t start_;
			void add_id(int32_t id) {
				fbb_.AddElement<int32_t>(Zombie_info::VT_ID, id, 0);
			}
			void add_hp(int32_t hp) {
				fbb_.AddElement<int32_t>(Zombie_info::VT_HP, hp, 0);
			}
			void add_animator(int32_t animator) {
				fbb_.AddElement<int32_t>(Zombie_info::VT_ANIMATOR, animator, 0);
			}
			void add_targetPlayer(int32_t targetPlayer) {
				fbb_.AddElement<int32_t>(Zombie_info::VT_TARGETPLAYER, targetPlayer, 0);
			}
			void add_position(const Vec3 *position) {
				fbb_.AddStruct(Zombie_info::VT_POSITION, position);
			}
			void add_rotation(const Vec3 *rotation) {
				fbb_.AddStruct(Zombie_info::VT_ROTATION, rotation);
			}
			explicit Zombie_infoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
				: fbb_(_fbb) {
				start_ = fbb_.StartTable();
			}
			Zombie_infoBuilder &operator=(const Zombie_infoBuilder &);
			flatbuffers::Offset<Zombie_info> Finish() {
				const auto end = fbb_.EndTable(start_);
				auto o = flatbuffers::Offset<Zombie_info>(end);
				return o;
			}
		};

		inline flatbuffers::Offset<Zombie_info> CreateZombie_info(
			flatbuffers::FlatBufferBuilder &_fbb,
			int32_t id = 0,
			int32_t hp = 0,
			int32_t animator = 0,
			int32_t targetPlayer = 0,
			const Vec3 *position = 0,
			const Vec3 *rotation = 0) {
			Zombie_infoBuilder builder_(_fbb);
			builder_.add_rotation(rotation);
			builder_.add_position(position);
			builder_.add_targetPlayer(targetPlayer);
			builder_.add_animator(animator);
			builder_.add_hp(hp);
			builder_.add_id(id);
			return builder_.Finish();
		}

		struct Game_Items FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
			enum {
				VT_DATA = 4
			};
			const flatbuffers::Vector<flatbuffers::Offset<Gameitem>> *data() const {
				return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Gameitem>> *>(VT_DATA);
			}
			bool Verify(flatbuffers::Verifier &verifier) const {
				return VerifyTableStart(verifier) &&
					VerifyOffset(verifier, VT_DATA) &&
					verifier.Verify(data()) &&
					verifier.VerifyVectorOfTables(data()) &&
					verifier.EndTable();
			}
		};

		struct Game_ItemsBuilder {
			flatbuffers::FlatBufferBuilder &fbb_;
			flatbuffers::uoffset_t start_;
			void add_data(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Gameitem>>> data) {
				fbb_.AddOffset(Game_Items::VT_DATA, data);
			}
			explicit Game_ItemsBuilder(flatbuffers::FlatBufferBuilder &_fbb)
				: fbb_(_fbb) {
				start_ = fbb_.StartTable();
			}
			Game_ItemsBuilder &operator=(const Game_ItemsBuilder &);
			flatbuffers::Offset<Game_Items> Finish() {
				const auto end = fbb_.EndTable(start_);
				auto o = flatbuffers::Offset<Game_Items>(end);
				return o;
			}
		};

		inline flatbuffers::Offset<Game_Items> CreateGame_Items(
			flatbuffers::FlatBufferBuilder &_fbb,
			flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Gameitem>>> data = 0) {
			Game_ItemsBuilder builder_(_fbb);
			builder_.add_data(data);
			return builder_.Finish();
		}

		inline flatbuffers::Offset<Game_Items> CreateGame_ItemsDirect(
			flatbuffers::FlatBufferBuilder &_fbb,
			const std::vector<flatbuffers::Offset<Gameitem>> *data = nullptr) {
			return Game::TheLastOne::CreateGame_Items(
				_fbb,
				data ? _fbb.CreateVector<flatbuffers::Offset<Gameitem>>(*data) : 0);
		}

		struct Gameitem FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
			enum {
				VT_ID = 4,
				VT_NAME = 6,
				VT_POSITION = 8,
				VT_ROTATION = 10,
				VT_EAT = 12,
				VT_RIDING = 14,
				VT_HP = 16,
				VT_KIND = 18,
				VT_CARKMH = 20
			};
			int32_t id() const {
				return GetField<int32_t>(VT_ID, 0);
			}
			const flatbuffers::String *name() const {
				return GetPointer<const flatbuffers::String *>(VT_NAME);
			}
			const Vec3 *position() const {
				return GetStruct<const Vec3 *>(VT_POSITION);
			}
			const Vec3 *rotation() const {
				return GetStruct<const Vec3 *>(VT_ROTATION);
			}
			bool eat() const {
				return GetField<uint8_t>(VT_EAT, 0) != 0;
			}
			bool riding() const {
				return GetField<uint8_t>(VT_RIDING, 0) != 0;
			}
			int32_t hp() const {
				return GetField<int32_t>(VT_HP, 0);
			}
			int32_t kind() const {
				return GetField<int32_t>(VT_KIND, 0);
			}
			float Carkmh() const {
				return GetField<float>(VT_CARKMH, 0.0f);
			}
			bool Verify(flatbuffers::Verifier &verifier) const {
				return VerifyTableStart(verifier) &&
					VerifyField<int32_t>(verifier, VT_ID) &&
					VerifyOffset(verifier, VT_NAME) &&
					verifier.Verify(name()) &&
					VerifyField<Vec3>(verifier, VT_POSITION) &&
					VerifyField<Vec3>(verifier, VT_ROTATION) &&
					VerifyField<uint8_t>(verifier, VT_EAT) &&
					VerifyField<uint8_t>(verifier, VT_RIDING) &&
					VerifyField<int32_t>(verifier, VT_HP) &&
					VerifyField<int32_t>(verifier, VT_KIND) &&
					VerifyField<float>(verifier, VT_CARKMH) &&
					verifier.EndTable();
			}
		};

		struct GameitemBuilder {
			flatbuffers::FlatBufferBuilder &fbb_;
			flatbuffers::uoffset_t start_;
			void add_id(int32_t id) {
				fbb_.AddElement<int32_t>(Gameitem::VT_ID, id, 0);
			}
			void add_name(flatbuffers::Offset<flatbuffers::String> name) {
				fbb_.AddOffset(Gameitem::VT_NAME, name);
			}
			void add_position(const Vec3 *position) {
				fbb_.AddStruct(Gameitem::VT_POSITION, position);
			}
			void add_rotation(const Vec3 *rotation) {
				fbb_.AddStruct(Gameitem::VT_ROTATION, rotation);
			}
			void add_eat(bool eat) {
				fbb_.AddElement<uint8_t>(Gameitem::VT_EAT, static_cast<uint8_t>(eat), 0);
			}
			void add_riding(bool riding) {
				fbb_.AddElement<uint8_t>(Gameitem::VT_RIDING, static_cast<uint8_t>(riding), 0);
			}
			void add_hp(int32_t hp) {
				fbb_.AddElement<int32_t>(Gameitem::VT_HP, hp, 0);
			}
			void add_kind(int32_t kind) {
				fbb_.AddElement<int32_t>(Gameitem::VT_KIND, kind, 0);
			}
			void add_Carkmh(float Carkmh) {
				fbb_.AddElement<float>(Gameitem::VT_CARKMH, Carkmh, 0.0f);
			}
			explicit GameitemBuilder(flatbuffers::FlatBufferBuilder &_fbb)
				: fbb_(_fbb) {
				start_ = fbb_.StartTable();
			}
			GameitemBuilder &operator=(const GameitemBuilder &);
			flatbuffers::Offset<Gameitem> Finish() {
				const auto end = fbb_.EndTable(start_);
				auto o = flatbuffers::Offset<Gameitem>(end);
				return o;
			}
		};

		inline flatbuffers::Offset<Gameitem> CreateGameitem(
			flatbuffers::FlatBufferBuilder &_fbb,
			int32_t id = 0,
			flatbuffers::Offset<flatbuffers::String> name = 0,
			const Vec3 *position = 0,
			const Vec3 *rotation = 0,
			bool eat = false,
			bool riding = false,
			int32_t hp = 0,
			int32_t kind = 0,
			float Carkmh = 0.0f) {
			GameitemBuilder builder_(_fbb);
			builder_.add_Carkmh(Carkmh);
			builder_.add_kind(kind);
			builder_.add_hp(hp);
			builder_.add_rotation(rotation);
			builder_.add_position(position);
			builder_.add_name(name);
			builder_.add_id(id);
			builder_.add_riding(riding);
			builder_.add_eat(eat);
			return builder_.Finish();
		}

		inline flatbuffers::Offset<Gameitem> CreateGameitemDirect(
			flatbuffers::FlatBufferBuilder &_fbb,
			int32_t id = 0,
			const char *name = nullptr,
			const Vec3 *position = 0,
			const Vec3 *rotation = 0,
			bool eat = false,
			bool riding = false,
			int32_t hp = 0,
			int32_t kind = 0,
			float Carkmh = 0.0f) {
			return Game::TheLastOne::CreateGameitem(
				_fbb,
				id,
				name ? _fbb.CreateString(name) : 0,
				position,
				rotation,
				eat,
				riding,
				hp,
				kind,
				Carkmh);
		}

		struct GameDangerLine FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
			enum {
				VT_DEMAGE = 4,
				VT_POSITION = 6,
				VT_SCALE = 8
			};
			int32_t demage() const {
				return GetField<int32_t>(VT_DEMAGE, 0);
			}
			const Vec3 *position() const {
				return GetStruct<const Vec3 *>(VT_POSITION);
			}
			const Vec3 *scale() const {
				return GetStruct<const Vec3 *>(VT_SCALE);
			}
			bool Verify(flatbuffers::Verifier &verifier) const {
				return VerifyTableStart(verifier) &&
					VerifyField<int32_t>(verifier, VT_DEMAGE) &&
					VerifyField<Vec3>(verifier, VT_POSITION) &&
					VerifyField<Vec3>(verifier, VT_SCALE) &&
					verifier.EndTable();
			}
		};

		struct GameDangerLineBuilder {
			flatbuffers::FlatBufferBuilder &fbb_;
			flatbuffers::uoffset_t start_;
			void add_demage(int32_t demage) {
				fbb_.AddElement<int32_t>(GameDangerLine::VT_DEMAGE, demage, 0);
			}
			void add_position(const Vec3 *position) {
				fbb_.AddStruct(GameDangerLine::VT_POSITION, position);
			}
			void add_scale(const Vec3 *scale) {
				fbb_.AddStruct(GameDangerLine::VT_SCALE, scale);
			}
			explicit GameDangerLineBuilder(flatbuffers::FlatBufferBuilder &_fbb)
				: fbb_(_fbb) {
				start_ = fbb_.StartTable();
			}
			GameDangerLineBuilder &operator=(const GameDangerLineBuilder &);
			flatbuffers::Offset<GameDangerLine> Finish() {
				const auto end = fbb_.EndTable(start_);
				auto o = flatbuffers::Offset<GameDangerLine>(end);
				return o;
			}
		};

		inline flatbuffers::Offset<GameDangerLine> CreateGameDangerLine(
			flatbuffers::FlatBufferBuilder &_fbb,
			int32_t demage = 0,
			const Vec3 *position = 0,
			const Vec3 *scale = 0) {
			GameDangerLineBuilder builder_(_fbb);
			builder_.add_scale(scale);
			builder_.add_position(position);
			builder_.add_demage(demage);
			return builder_.Finish();
		}

		struct Game_Timer FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
			enum {
				VT_KIND = 4,
				VT_TIME = 6
			};
			int32_t kind() const {
				return GetField<int32_t>(VT_KIND, 0);
			}
			int32_t time() const {
				return GetField<int32_t>(VT_TIME, 0);
			}
			bool Verify(flatbuffers::Verifier &verifier) const {
				return VerifyTableStart(verifier) &&
					VerifyField<int32_t>(verifier, VT_KIND) &&
					VerifyField<int32_t>(verifier, VT_TIME) &&
					verifier.EndTable();
			}
		};

		struct Game_TimerBuilder {
			flatbuffers::FlatBufferBuilder &fbb_;
			flatbuffers::uoffset_t start_;
			void add_kind(int32_t kind) {
				fbb_.AddElement<int32_t>(Game_Timer::VT_KIND, kind, 0);
			}
			void add_time(int32_t time) {
				fbb_.AddElement<int32_t>(Game_Timer::VT_TIME, time, 0);
			}
			explicit Game_TimerBuilder(flatbuffers::FlatBufferBuilder &_fbb)
				: fbb_(_fbb) {
				start_ = fbb_.StartTable();
			}
			Game_TimerBuilder &operator=(const Game_TimerBuilder &);
			flatbuffers::Offset<Game_Timer> Finish() {
				const auto end = fbb_.EndTable(start_);
				auto o = flatbuffers::Offset<Game_Timer>(end);
				return o;
			}
		};

		inline flatbuffers::Offset<Game_Timer> CreateGame_Timer(
			flatbuffers::FlatBufferBuilder &_fbb,
			int32_t kind = 0,
			int32_t time = 0) {
			Game_TimerBuilder builder_(_fbb);
			builder_.add_time(time);
			builder_.add_kind(kind);
			return builder_.Finish();
		}

		struct Client_Packet FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
			enum {
				VT_ID = 4
			};
			int32_t id() const {
				return GetField<int32_t>(VT_ID, 0);
			}
			bool Verify(flatbuffers::Verifier &verifier) const {
				return VerifyTableStart(verifier) &&
					VerifyField<int32_t>(verifier, VT_ID) &&
					verifier.EndTable();
			}
		};

		struct Client_PacketBuilder {
			flatbuffers::FlatBufferBuilder &fbb_;
			flatbuffers::uoffset_t start_;
			void add_id(int32_t id) {
				fbb_.AddElement<int32_t>(Client_Packet::VT_ID, id, 0);
			}
			explicit Client_PacketBuilder(flatbuffers::FlatBufferBuilder &_fbb)
				: fbb_(_fbb) {
				start_ = fbb_.StartTable();
			}
			Client_PacketBuilder &operator=(const Client_PacketBuilder &);
			flatbuffers::Offset<Client_Packet> Finish() {
				const auto end = fbb_.EndTable(start_);
				auto o = flatbuffers::Offset<Client_Packet>(end);
				return o;
			}
		};

		inline flatbuffers::Offset<Client_Packet> CreateClient_Packet(
			flatbuffers::FlatBufferBuilder &_fbb,
			int32_t id = 0) {
			Client_PacketBuilder builder_(_fbb);
			builder_.add_id(id);
			return builder_.Finish();
		}

		struct Game_HP_Set FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
			enum {
				VT_ID = 4,
				VT_HP = 6,
				VT_ARMOUR = 8,
				VT_KIND = 10
			};
			int32_t id() const {
				return GetField<int32_t>(VT_ID, 0);
			}
			int32_t hp() const {
				return GetField<int32_t>(VT_HP, 0);
			}
			int32_t armour() const {
				return GetField<int32_t>(VT_ARMOUR, 0);
			}
			int32_t kind() const {
				return GetField<int32_t>(VT_KIND, 0);
			}
			bool Verify(flatbuffers::Verifier &verifier) const {
				return VerifyTableStart(verifier) &&
					VerifyField<int32_t>(verifier, VT_ID) &&
					VerifyField<int32_t>(verifier, VT_HP) &&
					VerifyField<int32_t>(verifier, VT_ARMOUR) &&
					VerifyField<int32_t>(verifier, VT_KIND) &&
					verifier.EndTable();
			}
		};

		struct Game_HP_SetBuilder {
			flatbuffers::FlatBufferBuilder &fbb_;
			flatbuffers::uoffset_t start_;
			void add_id(int32_t id) {
				fbb_.AddElement<int32_t>(Game_HP_Set::VT_ID, id, 0);
			}
			void add_hp(int32_t hp) {
				fbb_.AddElement<int32_t>(Game_HP_Set::VT_HP, hp, 0);
			}
			void add_armour(int32_t armour) {
				fbb_.AddElement<int32_t>(Game_HP_Set::VT_ARMOUR, armour, 0);
			}
			void add_kind(int32_t kind) {
				fbb_.AddElement<int32_t>(Game_HP_Set::VT_KIND, kind, 0);
			}
			explicit Game_HP_SetBuilder(flatbuffers::FlatBufferBuilder &_fbb)
				: fbb_(_fbb) {
				start_ = fbb_.StartTable();
			}
			Game_HP_SetBuilder &operator=(const Game_HP_SetBuilder &);
			flatbuffers::Offset<Game_HP_Set> Finish() {
				const auto end = fbb_.EndTable(start_);
				auto o = flatbuffers::Offset<Game_HP_Set>(end);
				return o;
			}
		};

		inline flatbuffers::Offset<Game_HP_Set> CreateGame_HP_Set(
			flatbuffers::FlatBufferBuilder &_fbb,
			int32_t id = 0,
			int32_t hp = 0,
			int32_t armour = 0,
			int32_t kind = 0) {
			Game_HP_SetBuilder builder_(_fbb);
			builder_.add_kind(kind);
			builder_.add_armour(armour);
			builder_.add_hp(hp);
			builder_.add_id(id);
			return builder_.Finish();
		}

		/* 왜인지 모르겠지만 Get이 없어서 샘플에서 가져왔다..! */
		inline const Game::TheLastOne::Client_info *GetClientView(const void *buf) {
			return flatbuffers::GetRoot<Game::TheLastOne::Client_info>(buf);
		}

		inline const Game::TheLastOne::Client_Packet *GetClient_packetView(const void *buf) {
			return flatbuffers::GetRoot<Game::TheLastOne::Client_Packet>(buf);
		}

		inline const Game::TheLastOne::Zombie_info *getZombie_infoView(const void *buf) {
			return flatbuffers::GetRoot<Game::TheLastOne::Zombie_info>(buf);
		}

		inline const Game::TheLastOne::Zombie_Collection *getZombie_CollectionView(const void *buf) {
			return flatbuffers::GetRoot<Game::TheLastOne::Zombie_Collection>(buf);
		}

		inline const Game::TheLastOne::Game_HP_Set *getGame_HP_SetView(const void *buf) {
			return flatbuffers::GetRoot<Game::TheLastOne::Game_HP_Set>(buf);
		}

	}  // namespace TheLastOne
}  // namespace Game

#endif  // FLATBUFFERS_GENERATED_FLATBUFFERS_GAME_THELASTONE_H_