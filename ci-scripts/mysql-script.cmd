ALTER USER 'root'@'localhost' IDENTIFIED BY 'linux';
CREATE DATABASE oai_db;
USE oai_db;
SOURCE /home/oai_db.sql
INSERT INTO users VALUES ('208950000000031','380561234567','55000000000001',NULL,'PURGED',50,40000000,100000000,47,0000000000,1,0x0C0A34601D4F07677303652C0462535B,0,0,0x40,'ebd07771ace8677a',0x63bfa50ee6523365ff14c1f45f88737d);
GRANT ALL ON oai_db.* TO root@CICD_AMF_PUBLIC_ADDR IDENTIFIED BY 'linux';
