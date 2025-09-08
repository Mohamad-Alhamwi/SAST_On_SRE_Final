
undefined8 FUN_00102a80(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102da6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001031f3(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00103618(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00103edb(void)

{
  return;
}




long FUN_00102f8c(long param_1)

{
  return param_1 + 8;
}




ulong FUN_00102cb6(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_0010319e(param_1);
  lVar2 = FUN_0010281c(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010281c(local_40);
  local_30 = FUN_0010281c(local_40);
  plVar3 = (long *)FUN_001031c4(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010281c(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_0010319e(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_0010319e(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101da0(long *param_1)

{
  FUN_00102100(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101cf4(param_1);
  return;
}




undefined8 FUN_0010276a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010217a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010410d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101f7e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102894(param_2);
  FUN_00102843(&local_31,uVar1);
  uVar1 = FUN_0010281c(param_2);
                    /* try { // try from 00101fe4 to 00101fe8 has its CatchHandler @ 00102051 */
  FUN_001028a6(param_1,uVar1,&local_31);
  FUN_00101d80(&local_31);
  uVar2 = FUN_0010213a(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102964(param_2);
  uVar4 = FUN_0010290c(param_2);
                    /* try { // try from 00102032 to 00102036 has its CatchHandler @ 0010206f */
  uVar1 = FUN_001029bc(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001032f4(void)

{
  return;
}




long FUN_00102205(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102a80(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102a80(param_2);
  return lVar1 - *plVar2 >> 2;
}




undefined8 FUN_001021ae(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a5e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104180(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00103f49(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f12,local_18);
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




void FUN_0010414b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103bd1(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_0010213a(undefined8 param_1)

{
  return param_1;
}




void FUN_001039ed(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




long FUN_0010281c(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00103f07(void)

{
  return;
}




void FUN_00102e8c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e62(param_1,param_2);
  FUN_001020be(param_1);
  return;
}




void FUN_0010412c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103067(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103326(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101cdd(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102ddd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103221(param_2);
  uVar2 = FUN_00103221(param_1);
  FUN_00103067(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101920(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d34(local_58);
  local_64 = 7;
  local_60 = FUN_00101e3a(local_58);
  FUN_00101e8a(local_38,&local_60);
                    /* try { // try from 00101990 to 00101a25 has its CatchHandler @ 00101a71 */
  FUN_00101eb8(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e3a(local_58);
  FUN_00101e8a(local_38,&local_60);
  FUN_00101eb8(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e3a(local_58);
  FUN_00101e8a(local_38,&local_60);
  FUN_00101eb8(local_58,local_38[0],1,&local_64);
  FUN_00101f7e(local_38,local_58);
                    /* try { // try from 00101a2d to 00101a31 has its CatchHandler @ 00101a5c */
  FUN_001015bf(local_38);
  FUN_00101df2(local_38);
  FUN_00101df2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103e83(void)

{
  return;
}




void FUN_00101675(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)FUN_00101734(param_1,2);
  iVar1 = *piVar2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00103941("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103999(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001031f3(undefined8 param_1,undefined8 param_2)

{
  FUN_00103440(param_1,param_2,0);
  return;
}




ulong FUN_00103c31(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105108,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010217a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103440(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103618(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_00103eba(void)

{
  return;
}




void FUN_00103642(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_0010311c(param_3);
  uVar2 = FUN_00103747(local_28);
  uVar3 = FUN_00103747(local_20);
  uVar1 = FUN_00103768(uVar3,uVar2,uVar1);
  FUN_00103390(&local_30,uVar1);
  return;
}




void FUN_0010312e(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103ea4(void)

{
  return;
}




undefined8 FUN_00102fa2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010290c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a5e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010309c(param_2);
  uVar2 = FUN_0010309c(param_1);
  FUN_001030ae(uVar2,uVar1,param_3);
  return;
}




void FUN_001036b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010379d(param_2);
  uVar2 = FUN_0010379d(param_1);
  FUN_001037c3(uVar2,uVar1,param_3);
  return;
}




void FUN_00102c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010311c(param_2);
  uVar2 = FUN_0010311c(param_1);
  FUN_0010312e(uVar2,uVar1,param_3);
  return;
}




void FUN_0010335b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103507(param_1,param_2,param_3);
  return;
}




void FUN_00102e62(undefined8 param_1,undefined8 param_2)

{
  FUN_0010326e(param_1,param_2);
  return;
}




void FUN_0010214c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a33(param_1,param_2);
  return;
}




undefined8 FUN_0010219c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a33(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f79(param_1,param_2);
  return;
}




void FUN_00103ac3(undefined4 param_1)

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




void FUN_00101758(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined local_68 [32];
  undefined8 local_48 [3];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d34(local_68);
  local_74 = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 001017af to 001018aa has its CatchHandler @ 001018f6 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00103941("fgets() failed.");
  }
  else {
    local_74 = atoi(local_2e);
  }
  local_70 = FUN_00101e3a(local_68);
  FUN_00101e8a(local_48,&local_70);
  FUN_00101eb8(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101e3a(local_68);
  FUN_00101e8a(local_48,&local_70);
  FUN_00101eb8(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101e3a(local_68);
  FUN_00101e8a(local_48,&local_70);
  FUN_00101eb8(local_68,local_48[0],1,&local_74);
  FUN_00101f7e(local_48,local_68);
                    /* try { // try from 001018b2 to 001018b6 has its CatchHandler @ 001018e1 */
  FUN_00101509(local_48);
  FUN_00101df2(local_48);
  FUN_00101df2(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a92(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102fa2(param_3);
  uVar2 = FUN_00102f8c(param_1);
  FUN_00102fb4(*param_1,uVar2,uVar1);
  return;
}




void FUN_001032b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102fa2(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101cdd(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101e8a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010219c(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001039c1(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




bool FUN_00104016(pthread_t *param_1)

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




void FUN_00101eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_001021ae(param_1);
  local_18 = FUN_00102205(&local_38,&local_20);
  local_20 = FUN_0010276a(local_30);
  uVar1 = FUN_001027b6(&local_20,local_18);
  FUN_0010224a(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010276a(local_30);
  FUN_001027b6(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cf4(undefined8 param_1)

{
  FUN_00101d80(param_1);
  return;
}




undefined8 FUN_00103894(undefined8 *param_1)

{
  return *param_1;
}




void FUN_0010209e(undefined8 param_1)

{
  FUN_001029f2(param_1);
  return;
}




void FUN_001035cb(undefined8 param_1)

{
  FUN_00103618(param_1);
  return;
}




void FUN_00102f79(void)

{
  return;
}




void FUN_00102fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102fa2(param_3);
  FUN_001032b2(param_1,param_2,uVar1);
  return;
}




void FUN_00103eaf(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




undefined8 FUN_00102964(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102a5e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001037c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_0010311c(param_3);
  uVar2 = FUN_0010311c(local_28);
  uVar3 = FUN_0010311c(local_20);
  uVar1 = FUN_001038a9(uVar3,uVar2,uVar1);
  FUN_00103390(&local_30,uVar1);
  return;
}




void FUN_00103ec5(void)

{
  return;
}




long FUN_00101734(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




undefined8 FUN_00102e35(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e62(param_1,param_2);
  return param_1;
}




void FUN_00103e99(void)

{
  return;
}




void FUN_00101df2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010213a(param_1);
  FUN_0010214c(*param_1,param_1[1],uVar1);
  FUN_00101da0(param_1);
  return;
}




void FUN_00103b1d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103486(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103630(param_2);
  uVar2 = FUN_00103630(param_1);
  FUN_00103642(uVar2,uVar1,param_3);
  return;
}




int FUN_00103e32(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010224a(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 2) < param_3) {
      local_68 = FUN_00102cb6(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010276a(local_80);
      local_60 = FUN_00102b44(&local_88,&local_78);
      local_70 = FUN_00102da6(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_0010213a(local_80);
                    /* try { // try from 00102554 to 001025df has its CatchHandler @ 00102697 */
      FUN_00102c81(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_0010213a(local_80);
      puVar2 = (undefined8 *)FUN_0010219c(&local_88);
      local_70 = FUN_00102ddd(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_0010213a(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_0010219c(&local_88);
      local_70 = FUN_00102ddd(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_0010213a(local_80);
      FUN_0010214c(*local_80,local_80[1],uVar1);
      FUN_00102100(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102a92(local_38,param_1,param_4);
                    /* try { // try from 001022d4 to 001024a7 has its CatchHandler @ 00102679 */
      local_50 = FUN_00102b26(local_38);
      local_78 = FUN_00101e3a(local_80);
      local_48 = FUN_00102b44(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_0010213a(local_80);
        FUN_00102b88(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_0010219c(&local_88);
        FUN_00102be0(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_0010219c(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_0010219c(&local_88);
        FUN_00102c30(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_0010213a(local_80);
        lVar4 = FUN_00102c81(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_0010213a(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_0010219c(&local_88);
        FUN_00102b88(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_0010219c(&local_88);
        FUN_00102c30(*puVar2,local_40,local_50);
      }
      FUN_00102af2(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d14(undefined8 param_1)

{
  FUN_00101d54(param_1);
  return;
}




undefined4 * FUN_00103700(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  long local_10;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




undefined8 FUN_00102843(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e35(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102ec2(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102da6(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00102b26(undefined8 param_1)

{
  FUN_00102f8c(param_1);
  return;
}




void FUN_00102a01(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f52(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001033d7(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_001035cb(param_1);
  puVar1 = (undefined8 *)FUN_001035e9(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103f12(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010319e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102894(param_1);
  FUN_001033d7(uVar1);
  return;
}




void FUN_001020f0(void)

{
  return;
}




void FUN_00101d80(undefined8 param_1)

{
  FUN_001020f0(param_1);
  return;
}




void FUN_001034d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036b0(param_1,param_2,param_3);
  return;
}




void FUN_00102b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010301b(param_2);
  uVar2 = FUN_0010301b(param_1);
  FUN_00103067(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103e23(void)

{
  return 0;
}




void FUN_0010379d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103894(&local_10);
  FUN_0010309c(uVar1);
  return;
}




void FUN_0010326e(void)

{
  return;
}




void FUN_00103967(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102ff1(undefined8 param_1,undefined8 param_2)

{
  FUN_001032f4(param_1,param_2);
  return;
}




undefined8 FUN_00103747(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102a80(&local_10);
  return *puVar1;
}




void FUN_001029bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f1c(param_1,param_2,param_3);
  return;
}




void FUN_00101a9b(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined local_68 [32];
  undefined8 local_48 [3];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d34(local_68);
  local_74 = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 00101af2 to 00101bed has its CatchHandler @ 00101c39 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00103941("fgets() failed.");
  }
  else {
    local_74 = atoi(local_2e);
  }
  local_70 = FUN_00101e3a(local_68);
  FUN_00101e8a(local_48,&local_70);
  FUN_00101eb8(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101e3a(local_68);
  FUN_00101e8a(local_48,&local_70);
  FUN_00101eb8(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101e3a(local_68);
  FUN_00101e8a(local_48,&local_70);
  FUN_00101eb8(local_68,local_48[0],1,&local_74);
  FUN_00101f7e(local_48,local_68);
                    /* try { // try from 00101bf5 to 00101bf9 has its CatchHandler @ 00101c24 */
  FUN_00101675(local_48);
  FUN_00101df2(local_48);
  FUN_00101df2(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020be(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102c81(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103168(param_1,param_2,param_3);
  return;
}




void FUN_00103b45(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103a98(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_00103507(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




undefined8 FUN_00104071(void *param_1)

{
  free(param_1);
  return 1;
}




ulong * FUN_001035e9(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103831(param_1,param_2,param_3);
  return;
}




void FUN_00103ef1(void)

{
  return;
}




void FUN_00103e6d(void)

{
  return;
}




undefined8 FUN_00103390(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001027b6(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_0010217a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103e8e(void)

{
  return;
}




void FUN_001015bf(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_00101734(param_1,2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103999(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103941("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010311c(undefined8 param_1)

{
  return param_1;
}




void FUN_001038a9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038de(param_1,param_2,param_3);
  return;
}




ulong FUN_00103d35(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00105110,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103221(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103308(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed8)();
  return;
}




void FUN_00101c63(void)

{
  FUN_00101920();
  FUN_00101a9b();
  return;
}




void FUN_00103ed0(void)

{
  return;
}




void FUN_00103a6d(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103e57(void)

{
  return;
}




void FUN_00102f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103281(param_1,param_2,param_3);
  return;
}




void FUN_001029f2(void)

{
  return;
}




void FUN_00103326(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034d6(param_1,param_2,param_3);
  return;
}




void FUN_00103ee6(void)

{
  return;
}




void FUN_001033a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010357d(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010301b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103308(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103281(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103486(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101c78(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103941("Calling good()...");
  FUN_00101c63();
  FUN_00103941("Finished good()");
  FUN_00103941("Calling bad()...");
  FUN_00101758();
  FUN_00103941("Finished bad()");
  return 0;
}




void FUN_00102100(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102a01(param_1,param_2,param_3);
  }
  return;
}




void FUN_001041f0(void)

{
  return;
}




void FUN_00101509(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_00101734(param_1,2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103999(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103941("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e8c(param_1,param_3);
                    /* try { // try from 001028e0 to 001028e4 has its CatchHandler @ 001028e7 */
  FUN_00102ec2(param_1,param_2);
  return;
}




void FUN_00103b70(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103e4c(void)

{
  return;
}




void FUN_00102a5e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103e78(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103efc(void)

{
  return;
}




long FUN_00102b44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010219c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010219c(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00101d34(undefined8 param_1)

{
  FUN_00101d14(param_1);
  return;
}




ulong * FUN_001031c4(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103b9e(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103999(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void * FUN_00103831(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




undefined8 FUN_00104094(undefined8 *param_1)

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




void FUN_00103168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033a6(param_1,param_2,param_3);
  return;
}




void FUN_00103941(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103308(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001030ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_0010311c(param_3);
  uVar2 = FUN_0010311c(local_28);
  uVar3 = FUN_0010311c(local_20);
  uVar1 = FUN_0010335b(uVar3,uVar2,uVar1);
  FUN_00103390(&local_30,uVar1);
  return;
}




void FUN_00102af2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102f8c(param_1);
  FUN_00102ff1(*param_1,uVar1);
  return;
}




undefined8 FUN_00103630(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103e14(void)

{
  return 1;
}




void * FUN_001038de(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103a42(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102894(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e62(void)

{
  return;
}




void FUN_00103a17(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102f52(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101d54(undefined8 param_1)

{
  FUN_0010209e(param_1);
  FUN_001020be(param_1);
  return;
}




undefined8 FUN_0010309c(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00108028 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101450();
    DAT_00108028 = 1;
    return;
  }
  return;
}




void FUN_0010357d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010311c(param_1);
  uVar1 = FUN_00103700(uVar1,param_2,param_3);
  FUN_00103390(&local_10,uVar1);
  return;
}




undefined8 FUN_00101e3a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010217a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



