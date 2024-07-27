from sqlalchemy import create_engine, Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy.orm import sessionmaker

# Membuat engine SQLite
engine = create_engine('sqlite:///contoh_sqlalchemy.db', echo=True)

# Membuat basis deklaratif
Base = declarative_base()

# Mendefinisikan model pengguna
class Pengguna(Base):
    __tablename__ = 'pengguna'
    id = Column(Integer, primary_key=True)
    nama = Column(String)
    umur = Column(Integer)

# Membuat tabel di database
Base.metadata.create_all(engine)

# Membuat sesi
Session = sessionmaker(bind=engine)
session = Session()

# Menyisipkan data
pengguna_baru = Pengguna(nama="Bob", umur=25)
session.add(pengguna_baru)
session.commit()

# Mengambil dan menampilkan data
pengguna = session.query(Pengguna).all()
for p in pengguna:
    print(p.id, p.nama, p.umur)

# Menutup sesi
session.close()
