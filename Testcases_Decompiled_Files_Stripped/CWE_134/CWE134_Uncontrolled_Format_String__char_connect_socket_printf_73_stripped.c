
void FUN_00101020(void)

{
  (*(code *)PTR_00106ec0)();
  return;
}




undefined8 FUN_00102402(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b3b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103060(void)

{
  return;
}




void FUN_0010285b(undefined8 param_1,undefined8 param_2)

{
  FUN_001028fe(param_1,param_2,0);
  return;
}




void FUN_001024de(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00103360(void)

{
  return;
}




void FUN_0010263e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102402(param_2);
  uVar2 = FUN_00102104(param_1);
  FUN_00102150(param_1,uVar2,uVar1);
  return;
}




void FUN_00101e22(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00102378(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010294e(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001014b0();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00101f04(undefined8 param_1)

{
  FUN_00102076(param_1);
  return;
}




void FUN_00102536(undefined8 param_1,undefined8 param_2)

{
  FUN_001027ec(param_1,param_2);
  return;
}




void FUN_00101e98(undefined8 param_1)

{
  FUN_00101e78(param_1);
  return;
}




void FUN_00103013(void)

{
  return;
}




undefined8 FUN_0010229c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001025b4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102104(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023e4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b91(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102572(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102560(param_2);
  FUN_00102536(param_1,uVar1);
  FUN_00101e02(param_1);
  return;
}




long * FUN_00102a76(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102b67(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001032a6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




bool FUN_00103190(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00102abb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102cea(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101d72(void)

{
  FUN_00101897();
  FUN_00101a44();
  return;
}




void FUN_00103287(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010304a(void)

{
  return;
}




void FUN_00103008(void)

{
  return;
}




void FUN_001023e4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010301e(void)

{
  return;
}




void FUN_0010238a(undefined8 param_1,undefined8 param_2)

{
  FUN_001026aa(param_1,param_2);
  return;
}




undefined8 FUN_00102f9d(void)

{
  return 0;
}




void FUN_00102fc6(void)

{
  return;
}




void FUN_00103034(void)

{
  return;
}




void FUN_00102714(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102889(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101897(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e98(local_c8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_d0 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
                    /* try { // try from 0010196d to 001019bc has its CatchHandler @ 00101a14 */
  FUN_00101f50(local_c8,&local_d0);
  FUN_00101f50(local_c8,&local_d0);
  FUN_00101f50(local_c8,&local_d0);
  FUN_00101f8a(local_a8,local_c8);
                    /* try { // try from 001019c7 to 001019cb has its CatchHandler @ 001019fc */
  FUN_001029af(local_a8);
  FUN_00101eb8(local_a8);
  FUN_00101eb8(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d4b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101f50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102104(param_1);
  FUN_00102150(param_1,uVar1,param_2);
  return;
}




void FUN_001032c5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102ae1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101dec(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102bbc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_0010303f(void)

{
  return;
}




void FUN_00102076(void)

{
  return;
}




undefined8 FUN_001025d2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001022e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_001025d2(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010261c(&local_18);
    FUN_0010263e(local_10,uVar2);
    FUN_001025f8(&local_18);
  }
  return;
}




ulong FUN_00102eaf(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010306b(void)

{
  return;
}




void FUN_00102b13(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102ff2(void)

{
  return;
}




void FUN_0010308c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102800(long param_1)

{
  FUN_001028e0(param_1 + 0x10);
  return;
}




void FUN_00103029(void)

{
  return;
}




void FUN_0010268c(undefined8 param_1)

{
  FUN_00102822(param_1);
  return;
}




void FUN_001025b4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102214(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102560(param_2);
  FUN_00102572(param_1,uVar1);
  return;
}




void FUN_001029af(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a18(param_1);
  printf((char *)*puVar1);
  return;
}




void FUN_00102a18(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00102104(param_1);
  FUN_00102a76(&local_18);
  FUN_00102a9a(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028fe(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102960(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102056(undefined8 param_1)

{
  FUN_00102346(param_1);
  return;
}




void FUN_00102c3d(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102978(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a18(param_1);
  printf((char *)*puVar1);
  return;
}




undefined8 FUN_00102f8e(void)

{
  return 1;
}




void FUN_00102356(long param_1)

{
  FUN_0010268c(param_1 + 0x10);
  return;
}




void FUN_00101e02(undefined8 param_1)

{
  FUN_00101e22(param_1);
  return;
}




undefined8 FUN_001030c3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010308c,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




undefined8 FUN_0010224c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001025b4(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102834(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001028e0(undefined8 param_1)

{
  FUN_0010294e(param_1);
  return;
}




void FUN_00102cbf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102ffd(void)

{
  return;
}




long FUN_001027ca(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101a44(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  char *local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined local_b8 [32];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e98(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f0 = local_88;
  local_e8 = strlen(local_f0);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00101b87 to 00101cea has its CatchHandler @ 00101d42 */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_f0 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f0[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f0,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f0,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  FUN_00101f50(local_d8,&local_f0);
  FUN_00101f50(local_d8,&local_f0);
  FUN_00101f50(local_d8,&local_f0);
  FUN_00101f8a(local_b8,local_d8);
                    /* try { // try from 00101cf5 to 00101cf9 has its CatchHandler @ 00101d2a */
  FUN_001029e6(local_b8);
  FUN_00101eb8(local_b8);
  FUN_00101eb8(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00102202(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102414(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001026f0(param_1);
  uVar2 = FUN_00102378(param_1);
  FUN_00102714(local_38,uVar2,uVar1);
  uVar3 = FUN_00102402(param_2);
  uVar4 = FUN_00102356(uVar1);
  FUN_0010278d(uVar2,uVar4,uVar3);
  FUN_001027ca(local_38,0);
  FUN_0010274e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_0010278d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102402(param_3);
  FUN_0010289c(param_1,param_2,uVar1);
  return;
}




void FUN_00102fdc(void)

{
  return;
}




void FUN_00103055(void)

{
  return;
}




void FUN_001023b4(undefined8 param_1,undefined8 param_2)

{
  FUN_001026bd(param_1,param_2,1);
  return;
}




void FUN_00102c12(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102c97(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103076(void)

{
  return;
}




void FUN_00102150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102402(param_3);
  p_Var2 = (_List_node_base *)FUN_00102414(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001024de(param_1,1);
  return;
}




void FUN_00101569(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  char *local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined local_b8 [32];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e98(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f0 = local_88;
  local_e8 = strlen(local_f0);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 001016ac to 0010180f has its CatchHandler @ 00101867 */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_f0 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f0[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f0,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f0,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  FUN_00101f50(local_d8,&local_f0);
  FUN_00101f50(local_d8,&local_f0);
  FUN_00101f50(local_d8,&local_f0);
  FUN_00101f8a(local_b8,local_d8);
                    /* try { // try from 0010181a to 0010181e has its CatchHandler @ 0010184f */
  FUN_00102978(local_b8);
  FUN_00101eb8(local_b8);
  FUN_00101eb8(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101d87(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102abb("Calling good()...");
  FUN_00101d72();
  FUN_00102abb("Finished good()");
  FUN_00102abb("Calling bad()...");
  FUN_00101569();
  FUN_00102abb("Finished bad()");
  return 0;
}




void FUN_00102086(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00102356(local_20);
    uVar3 = FUN_00102378(param_1);
    FUN_0010238a(uVar3,uVar2);
    FUN_001023b4(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102fd1(void)

{
  return;
}




void FUN_00101e58(undefined8 param_1)

{
  FUN_00101f04(param_1);
  return;
}




void FUN_00101ed8(undefined8 param_1)

{
  FUN_00102056(param_1);
  FUN_00101e02(param_1);
  return;
}




void FUN_00102a9a(undefined8 *param_1)

{
  FUN_00102356(*param_1);
  return;
}




void FUN_00102346(void)

{
  return;
}




void FUN_00102be7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101e78(undefined8 param_1)

{
  FUN_00101ed8(param_1);
  return;
}




undefined8 FUN_00102960(void)

{
  return 0x555555555555555;
}




ulong FUN_00102dab(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010409c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102560(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d18(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00102fac(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103081(void)

{
  return;
}




void FUN_001032f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_001026f0(undefined8 param_1)

{
  FUN_0010285b(param_1,1);
  return;
}




void FUN_0010289c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102402(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101dec(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00102508(undefined8 param_1,undefined8 param_2)

{
  FUN_00102536(param_1,param_2);
  return param_1;
}




void FUN_0010274e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001026bd(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001026aa(void)

{
  return;
}




void FUN_00101f8a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102202(param_2);
  FUN_001021b1(&local_21,uVar1);
  FUN_00102214(param_1,&local_21);
  FUN_00101f04(&local_21);
  uVar1 = FUN_0010229c(param_2);
  uVar2 = FUN_0010224c(param_2);
                    /* try { // try from 00102016 to 0010201a has its CatchHandler @ 0010201d */
  FUN_001022e8(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102fe7(void)

{
  return;
}




void FUN_001026bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102834(param_1,param_2,param_3);
  return;
}




void FUN_001029e6(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a18(param_1);
  puts((char *)*puVar1);
  return;
}




void FUN_00101f24(undefined8 param_1)

{
  FUN_00102086(param_1);
  FUN_00101e58(param_1);
  return;
}




void FUN_0010261c(undefined8 *param_1)

{
  FUN_00102800(*param_1);
  return;
}




void FUN_001027ec(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




undefined8 FUN_00102822(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_001025f8(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_001021b1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102508(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101eb8(undefined8 param_1)

{
  FUN_00101f24(param_1);
  return;
}




undefined8 FUN_00102889(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010320e(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




undefined8 FUN_001031eb(void *param_1)

{
  free(param_1);
  return 1;
}



