
void FUN_001036d1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001038a8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103b8f(void)

{
  return;
}




void FUN_0010387d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102cd0(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a0b(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101a82(undefined8 param_1)

{
  FUN_00101dcc(param_1);
  FUN_00101dec(param_1);
  return;
}




void FUN_00103376(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e4a(param_3);
  uVar2 = FUN_0010347f(local_28);
  uVar3 = FUN_0010347f(local_20);
  uVar1 = FUN_001034a0(uVar3,uVar2,uVar1);
  FUN_001030c4(&local_30,uVar1);
  return;
}




undefined8 FUN_001030c4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103c81(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c4a,local_18);
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




void FUN_00101aae(undefined8 param_1)

{
  FUN_00101e1e(param_1);
  return;
}




void FUN_00102720(void)

{
  return;
}




void FUN_0010278c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_0010334c(void)

{
  return 0xfffffffffffffff;
}




void FUN_001025d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bba(param_1,param_3);
                    /* try { // try from 0010260e to 00102612 has its CatchHandler @ 00102615 */
  FUN_00102bf0(param_1,param_2);
  return;
}




void FUN_0010290e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dca(param_2);
  uVar2 = FUN_00102dca(param_1);
  FUN_00102ddc(uVar2,uVar1,param_3);
  return;
}




ulong * FUN_0010331d(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010320a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033e4(param_1,param_2,param_3);
  return;
}




void FUN_00101a42(undefined8 param_1)

{
  FUN_00101a82(param_1);
  return;
}




undefined8 * FUN_00103434(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




ulong FUN_00103a6d(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101430();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101646(param_1,2);
  __dest = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  memmove(__dest,local_1a8,400);
  FUN_001036d1(*__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bc6(void)

{
  return;
}




void FUN_00102ed0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025c2(param_1);
  FUN_0010310b(uVar1);
  return;
}




ulong FUN_001029e4(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102ed0(param_1);
  lVar2 = FUN_0010254a(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010254a(local_40);
  local_30 = FUN_0010254a(local_40);
  plVar3 = (long *)FUN_00102ef6(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010254a(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102ed0(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102ed0(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001038d6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101edc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010278c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e4a(param_3);
  uVar2 = FUN_00102e4a(local_28);
  uVar3 = FUN_00102e4a(local_20);
  uVar1 = FUN_0010308f(uVar3,uVar2,uVar1);
  FUN_001030c4(&local_30,uVar1);
  return;
}




undefined8 FUN_00102d49(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010303c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102872(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101eca(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101eca(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103c1e(void)

{
  return;
}




void FUN_001032b1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e4a(param_1);
  uVar1 = FUN_00103434(uVar1,param_2,param_3);
  FUN_001030c4(&local_10,uVar1);
  return;
}




void FUN_00103eb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102b0b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f53(param_2);
  uVar2 = FUN_00102f53(param_1);
  FUN_00102d95(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103bf2(void)

{
  return;
}




void FUN_00103b9a(void)

{
  return;
}




void FUN_001034fb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e4a(param_3);
  uVar2 = FUN_00102e4a(local_28);
  uVar3 = FUN_00102e4a(local_20);
  uVar1 = FUN_001035e1(uVar3,uVar2,uVar1);
  FUN_001030c4(&local_30,uVar1);
  return;
}




void FUN_001037d0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001037fb(undefined4 param_1)

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




undefined8 FUN_00103dcc(undefined8 *param_1)

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




ulong FUN_00103969(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_0010323b(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001032ff(undefined8 param_1)

{
  FUN_0010334c(param_1);
  return;
}




void FUN_00102820(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cba(param_1);
  FUN_00102d1f(*param_1,uVar1);
  return;
}




void FUN_00101996(void)

{
  FUN_00101800();
  return;
}




void FUN_00103679(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101dcc(undefined8 param_1)

{
  FUN_00102720(param_1);
  return;
}




undefined8 FUN_00102dca(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001024e4(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101ea8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001036f9(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103c4a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010305a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010320a(param_1,param_2,param_3);
  return;
}




void FUN_0010308f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010323b(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102ef6(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001030da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032b1(param_1,param_2,param_3);
  return;
}




void FUN_00103b84(void)

{
  return;
}




long FUN_00101f33(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027ae(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027ae(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103ba5(void)

{
  return;
}




long FUN_00102cba(long param_1)

{
  return param_1 + 8;
}




void * FUN_00103569(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010166a(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a62(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(200);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101b68(local_58);
  FUN_00101bb8(local_38,&local_60);
                    /* try { // try from 001016f5 to 0010178a has its CatchHandler @ 001017d6 */
  FUN_00101be6(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b68(local_58);
  FUN_00101bb8(local_38,&local_60);
  FUN_00101be6(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b68(local_58);
  FUN_00101bb8(local_38,&local_60);
  FUN_00101be6(local_58,local_38[0],1,&local_68);
  FUN_00101cac(local_38,local_58);
                    /* try { // try from 00101792 to 00101796 has its CatchHandler @ 001017c1 */
  FUN_001014e9(local_38);
  FUN_00101b20(local_38);
  FUN_00101b20(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d95(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010305a(param_1,param_2,param_3);
  return;
}




long FUN_00101646(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103909(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103028(void)

{
  return;
}




void FUN_00103f20(void)

{
  return;
}




undefined8 FUN_00103364(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f25(undefined8 param_1,undefined8 param_2)

{
  FUN_00103174(param_1,param_2,0);
  return;
}




void FUN_00101dec(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_001025c2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010347f(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027ae(&local_10);
  return *puVar1;
}




undefined8 FUN_00103b4c(void)

{
  return 1;
}




void FUN_0010374f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void * FUN_00103616(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103e83(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101cac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025c2(param_2);
  FUN_00102571(&local_31,uVar1);
  uVar1 = FUN_0010254a(param_2);
                    /* try { // try from 00101d12 to 00101d16 has its CatchHandler @ 00101d7f */
  FUN_001025d4(param_1,uVar1,&local_31);
  FUN_00101aae(&local_31);
  uVar2 = FUN_00101e68(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102692(param_2);
  uVar4 = FUN_0010263a(param_2);
                    /* try { // try from 00101d60 to 00101d64 has its CatchHandler @ 00101d9d */
  uVar1 = FUN_001026ea(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ea8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101ace(long *param_1)

{
  FUN_00101e2e(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a22(param_1);
  return;
}




void FUN_00103c08(void)

{
  return;
}




undefined8 FUN_00102571(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b63(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103174(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010334c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001029af(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e9a(param_1,param_2,param_3);
  return;
}




void FUN_00101be6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101edc(param_1);
  local_18 = FUN_00101f33(&local_38,&local_20);
  local_20 = FUN_00102498(local_30);
  uVar1 = FUN_001024e4(&local_20,local_18);
  FUN_00101f78(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102498(local_30);
  FUN_001024e4(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102fb3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031ba(param_1,param_2,param_3);
  return;
}




void FUN_001037a5(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101e7a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102761(param_1,param_2);
  return;
}




void FUN_00101800(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a62(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(400);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101b68(local_58);
  FUN_00101bb8(local_38,&local_60);
                    /* try { // try from 0010188b to 00101920 has its CatchHandler @ 0010196c */
  FUN_00101be6(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b68(local_58);
  FUN_00101bb8(local_38,&local_60);
  FUN_00101be6(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b68(local_58);
  FUN_00101bb8(local_38,&local_60);
  FUN_00101be6(local_58,local_38[0],1,&local_68);
  FUN_00101cac(local_38,local_58);
                    /* try { // try from 00101928 to 0010192c has its CatchHandler @ 00101957 */
  FUN_00101597(local_38);
  FUN_00101b20(local_38);
  FUN_00101b20(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010263a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010278c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c34(void)

{
  return;
}




void FUN_00103bb0(void)

{
  return;
}




undefined8 FUN_001035cc(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00101a0b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102e4a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010310b(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001032ff(param_1);
  puVar1 = (undefined8 *)FUN_0010331d(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103855(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




undefined8 FUN_00102498(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ea8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b90(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fa0(param_1,param_2);
  return;
}




undefined8 FUN_001019a6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103679("Calling good()...");
  FUN_00101996();
  FUN_00103679("Finished good()");
  FUN_00103679("Calling bad()...");
  FUN_0010166a();
  FUN_00103679("Finished bad()");
  return 0;
}




undefined8 FUN_00102b63(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b90(param_1,param_2);
  return param_1;
}




void FUN_00101bb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101eca(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103e45(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101e1e(void)

{
  return;
}




void FUN_001033e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034d5(param_2);
  uVar2 = FUN_001034d5(param_1);
  FUN_001034fb(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d1f(undefined8 param_1,undefined8 param_2)

{
  FUN_00103028(param_1,param_2);
  return;
}




void FUN_00103be7(void)

{
  return;
}




void FUN_00103c29(void)

{
  return;
}




void FUN_00102c4a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fb3(param_1,param_2,param_3);
  return;
}




void FUN_00102e5c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_00103b5b(void)

{
  return 0;
}




void FUN_001035e1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103616(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103da9(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102c80(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103e64(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103bbb(void)

{
  return;
}




undefined8 FUN_00101b68(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ea8(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030da(param_1,param_2,param_3);
  return;
}




void FUN_001031ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103364(param_2);
  uVar2 = FUN_00103364(param_1);
  FUN_00103376(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c3f(void)

{
  return;
}




void FUN_00101b20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e68(param_1);
  FUN_00101e7a(*param_1,param_1[1],uVar1);
  FUN_00101ace(param_1);
  return;
}




void FUN_00102ce2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cd0(param_3);
  FUN_00102fe4(param_1,param_2,uVar1);
  return;
}




void FUN_001034d5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035cc(&local_10);
  FUN_00102dca(uVar1);
  return;
}




void FUN_0010369f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102ca7(void)

{
  return;
}




void FUN_0010377a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101eca(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




long FUN_0010254a(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00101a22(undefined8 param_1)

{
  FUN_00101aae(param_1);
  return;
}




undefined8 FUN_00102f53(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010303c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c13(void)

{
  return;
}




void FUN_00101e2e(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010272f(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101a62(undefined8 param_1)

{
  FUN_00101a42(param_1);
  return;
}




void FUN_00101f78(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_001029e4(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102498(local_80);
      local_60 = FUN_00102872(&local_88,&local_78);
      local_70 = FUN_00102ad4(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e68(local_80);
                    /* try { // try from 00102282 to 0010230d has its CatchHandler @ 001023c5 */
      FUN_001029af(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e68(local_80);
      puVar2 = (undefined8 *)FUN_00101eca(&local_88);
      local_70 = FUN_00102b0b(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e68(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101eca(&local_88);
      local_70 = FUN_00102b0b(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e68(local_80);
      FUN_00101e7a(*local_80,local_80[1],uVar1);
      FUN_00101e2e(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027c0(local_38,param_1,param_4);
                    /* try { // try from 00102002 to 001021d5 has its CatchHandler @ 001023a7 */
      local_50 = FUN_00102854(local_38);
      local_78 = FUN_00101b68(local_80);
      local_48 = FUN_00102872(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e68(local_80);
        FUN_001028b6(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101eca(&local_88);
        FUN_0010290e(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101eca(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101eca(&local_88);
        FUN_0010295e(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e68(local_80);
        lVar4 = FUN_001029af(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e68(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101eca(&local_88);
        FUN_001028b6(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101eca(&local_88);
        FUN_0010295e(*puVar2,local_40,local_50);
      }
      FUN_00102820(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102bf0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ad4(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103bfd(void)

{
  return;
}




bool FUN_00103d4e(pthread_t *param_1)

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




void FUN_0010295e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e4a(param_2);
  uVar2 = FUN_00102e4a(param_1);
  FUN_00102e5c(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102ad4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f25(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102bba(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b90(param_1,param_2);
  FUN_00101dec(param_1);
  return;
}




void FUN_00101597(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101646(param_1,2);
  __dest = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  memmove(__dest,local_1a8,400);
  FUN_001036d1(*__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e68(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bdc(void)

{
  return;
}




void FUN_00103725(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010272f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c80(param_1,param_2,param_3);
  return;
}




void FUN_001026ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c4a(param_1,param_2,param_3);
  return;
}




void FUN_00102854(undefined8 param_1)

{
  FUN_00102cba(param_1);
  return;
}




void FUN_001034a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103569(param_1,param_2,param_3);
  return;
}




void FUN_001027c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102cd0(param_3);
  uVar2 = FUN_00102cba(param_1);
  FUN_00102ce2(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00102692(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010278c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00103b6a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001027ae(undefined8 param_1)

{
  return param_1;
}




void FUN_00102fa0(void)

{
  return;
}




undefined8 FUN_00102cd0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102761(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ca7(param_1,param_2);
  return;
}




void FUN_00103bd1(void)

{
  return;
}




void FUN_001028b6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d49(param_2);
  uVar2 = FUN_00102d49(param_1);
  FUN_00102d95(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010303c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



