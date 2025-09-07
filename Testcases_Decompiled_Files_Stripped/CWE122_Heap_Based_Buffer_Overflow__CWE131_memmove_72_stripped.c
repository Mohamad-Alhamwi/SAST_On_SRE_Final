
void FUN_001036c3(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010389a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103b81(void)

{
  return;
}




void FUN_0010386f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102fd6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102cc2(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019fd(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101a74(undefined8 param_1)

{
  FUN_00101dbe(param_1);
  FUN_00101dde(param_1);
  return;
}




void FUN_00103368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e3c(param_3);
  uVar2 = FUN_00103471(local_28);
  uVar3 = FUN_00103471(local_20);
  uVar1 = FUN_00103492(uVar3,uVar2,uVar1);
  FUN_001030b6(&local_30,uVar1);
  return;
}




undefined8 FUN_001030b6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103c73(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c3c,local_18);
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




void FUN_00101aa0(undefined8 param_1)

{
  FUN_00101e10(param_1);
  return;
}




void FUN_00102712(void)

{
  return;
}




void FUN_0010277e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_0010333e(void)

{
  return 0xfffffffffffffff;
}




void FUN_001025c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bac(param_1,param_3);
                    /* try { // try from 00102600 to 00102604 has its CatchHandler @ 00102607 */
  FUN_00102be2(param_1,param_2);
  return;
}




void FUN_00102900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dbc(param_2);
  uVar2 = FUN_00102dbc(param_1);
  FUN_00102dce(uVar2,uVar1,param_3);
  return;
}




ulong * FUN_0010330f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001031fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033d6(param_1,param_2,param_3);
  return;
}




void FUN_00101a34(undefined8 param_1)

{
  FUN_00101a74(param_1);
  return;
}




undefined8 * FUN_00103426(undefined8 *param_1,long param_2,undefined8 *param_3)

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




ulong FUN_00103a5f(long param_1,ulong param_2,long param_3)

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
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101638(param_1,2);
  __dest = (undefined4 *)*puVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  memmove(__dest,&local_38,0x28);
  FUN_001036c3(*__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bb8(void)

{
  return;
}




void FUN_00102ec2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025b4(param_1);
  FUN_001030fd(uVar1);
  return;
}




ulong FUN_001029d6(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102ec2(param_1);
  lVar2 = FUN_0010253c(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010253c(local_40);
  local_30 = FUN_0010253c(local_40);
  plVar3 = (long *)FUN_00102ee8(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010253c(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102ec2(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102ec2(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001038c8(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101ece(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010277e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102dce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e3c(param_3);
  uVar2 = FUN_00102e3c(local_28);
  uVar3 = FUN_00102e3c(local_20);
  uVar1 = FUN_00103081(uVar3,uVar2,uVar1);
  FUN_001030b6(&local_30,uVar1);
  return;
}




undefined8 FUN_00102d3b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010302e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102864(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101ebc(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101ebc(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103c10(void)

{
  return;
}




void FUN_001032a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e3c(param_1);
  uVar1 = FUN_00103426(uVar1,param_2,param_3);
  FUN_001030b6(&local_10,uVar1);
  return;
}




void FUN_00103ea0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102afd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f45(param_2);
  uVar2 = FUN_00102f45(param_1);
  FUN_00102d87(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103be4(void)

{
  return;
}




void FUN_00103b8c(void)

{
  return;
}




void FUN_001034ed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e3c(param_3);
  uVar2 = FUN_00102e3c(local_28);
  uVar3 = FUN_00102e3c(local_20);
  uVar1 = FUN_001035d3(uVar3,uVar2,uVar1);
  FUN_001030b6(&local_30,uVar1);
  return;
}




void FUN_001037c2(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001037ed(undefined4 param_1)

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




undefined8 FUN_00103dbe(undefined8 *param_1)

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




ulong FUN_0010395b(long param_1,ulong param_2,long param_3)

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




long FUN_0010322d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001032f1(undefined8 param_1)

{
  FUN_0010333e(param_1);
  return;
}




void FUN_00102812(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cac(param_1);
  FUN_00102d11(*param_1,uVar1);
  return;
}




void FUN_00101988(void)

{
  FUN_001017f2();
  return;
}




void FUN_0010366b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101dbe(undefined8 param_1)

{
  FUN_00102712(param_1);
  return;
}




undefined8 FUN_00102dbc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001024d6(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101e9a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001036eb(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103c3c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010304c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031fc(param_1,param_2,param_3);
  return;
}




void FUN_00103081(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010322d(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102ee8(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001030cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032a3(param_1,param_2,param_3);
  return;
}




void FUN_00103b76(void)

{
  return;
}




long FUN_00101f25(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027a0(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027a0(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103b97(void)

{
  return;
}




long FUN_00102cac(long param_1)

{
  return param_1 + 8;
}




void * FUN_0010355b(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010165c(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a54(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(10);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101b5a(local_58);
  FUN_00101baa(local_38,&local_60);
                    /* try { // try from 001016e7 to 0010177c has its CatchHandler @ 001017c8 */
  FUN_00101bd8(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b5a(local_58);
  FUN_00101baa(local_38,&local_60);
  FUN_00101bd8(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b5a(local_58);
  FUN_00101baa(local_38,&local_60);
  FUN_00101bd8(local_58,local_38[0],1,&local_68);
  FUN_00101c9e(local_38,local_58);
                    /* try { // try from 00101784 to 00101788 has its CatchHandler @ 001017b3 */
  FUN_001014e9(local_38);
  FUN_00101b12(local_38);
  FUN_00101b12(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d87(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010304c(param_1,param_2,param_3);
  return;
}




long FUN_00101638(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001038fb(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010301a(void)

{
  return;
}




void FUN_00103f10(void)

{
  return;
}




undefined8 FUN_00103356(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f17(undefined8 param_1,undefined8 param_2)

{
  FUN_00103166(param_1,param_2,0);
  return;
}




void FUN_00101dde(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_001025b4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103471(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027a0(&local_10);
  return *puVar1;
}




undefined8 FUN_00103b3e(void)

{
  return 1;
}




void FUN_00103741(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void * FUN_00103608(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103e75(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101c9e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025b4(param_2);
  FUN_00102563(&local_31,uVar1);
  uVar1 = FUN_0010253c(param_2);
                    /* try { // try from 00101d04 to 00101d08 has its CatchHandler @ 00101d71 */
  FUN_001025c6(param_1,uVar1,&local_31);
  FUN_00101aa0(&local_31);
  uVar2 = FUN_00101e5a(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102684(param_2);
  uVar4 = FUN_0010262c(param_2);
                    /* try { // try from 00101d52 to 00101d56 has its CatchHandler @ 00101d8f */
  uVar1 = FUN_001026dc(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e9a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101ac0(long *param_1)

{
  FUN_00101e20(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a14(param_1);
  return;
}




void FUN_00103bfa(void)

{
  return;
}




undefined8 FUN_00102563(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b55(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103166(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010333e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001029a1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e8c(param_1,param_2,param_3);
  return;
}




void FUN_00101bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101ece(param_1);
  local_18 = FUN_00101f25(&local_38,&local_20);
  local_20 = FUN_0010248a(local_30);
  uVar1 = FUN_001024d6(&local_20,local_18);
  FUN_00101f6a(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010248a(local_30);
  FUN_001024d6(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102fa5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031ac(param_1,param_2,param_3);
  return;
}




void FUN_00103797(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101e6c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102753(param_1,param_2);
  return;
}




void FUN_001017f2(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a54(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(0x28);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101b5a(local_58);
  FUN_00101baa(local_38,&local_60);
                    /* try { // try from 0010187d to 00101912 has its CatchHandler @ 0010195e */
  FUN_00101bd8(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b5a(local_58);
  FUN_00101baa(local_38,&local_60);
  FUN_00101bd8(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b5a(local_58);
  FUN_00101baa(local_38,&local_60);
  FUN_00101bd8(local_58,local_38[0],1,&local_68);
  FUN_00101c9e(local_38,local_58);
                    /* try { // try from 0010191a to 0010191e has its CatchHandler @ 00101949 */
  FUN_00101590(local_38);
  FUN_00101b12(local_38);
  FUN_00101b12(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010262c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010277e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c26(void)

{
  return;
}




void FUN_00103ba2(void)

{
  return;
}




undefined8 FUN_001035be(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_001019fd(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102e3c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001030fd(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001032f1(param_1);
  puVar1 = (undefined8 *)FUN_0010330f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103847(uint param_1)

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




undefined8 FUN_0010248a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e9a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b82(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f92(param_1,param_2);
  return;
}




undefined8 FUN_00101998(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010366b("Calling good()...");
  FUN_00101988();
  FUN_0010366b("Finished good()");
  FUN_0010366b("Calling bad()...");
  FUN_0010165c();
  FUN_0010366b("Finished bad()");
  return 0;
}




undefined8 FUN_00102b55(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b82(param_1,param_2);
  return param_1;
}




void FUN_00101baa(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101ebc(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103e37(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101e10(void)

{
  return;
}




void FUN_001033d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034c7(param_2);
  uVar2 = FUN_001034c7(param_1);
  FUN_001034ed(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d11(undefined8 param_1,undefined8 param_2)

{
  FUN_0010301a(param_1,param_2);
  return;
}




void FUN_00103bd9(void)

{
  return;
}




void FUN_00103c1b(void)

{
  return;
}




void FUN_00102c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fa5(param_1,param_2,param_3);
  return;
}




void FUN_00102e4e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_00103b4d(void)

{
  return 0;
}




void FUN_001035d3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103608(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103d9b(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102c72(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103e56(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103bad(void)

{
  return;
}




undefined8 FUN_00101b5a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e9a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030cc(param_1,param_2,param_3);
  return;
}




void FUN_001031ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103356(param_2);
  uVar2 = FUN_00103356(param_1);
  FUN_00103368(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c31(void)

{
  return;
}




void FUN_00101b12(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e5a(param_1);
  FUN_00101e6c(*param_1,param_1[1],uVar1);
  FUN_00101ac0(param_1);
  return;
}




void FUN_00102cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cc2(param_3);
  FUN_00102fd6(param_1,param_2,uVar1);
  return;
}




void FUN_001034c7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035be(&local_10);
  FUN_00102dbc(uVar1);
  return;
}




void FUN_00103691(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102c99(void)

{
  return;
}




void FUN_0010376c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101ebc(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




long FUN_0010253c(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00101a14(undefined8 param_1)

{
  FUN_00101aa0(param_1);
  return;
}




undefined8 FUN_00102f45(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010302e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c05(void)

{
  return;
}




void FUN_00101e20(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102721(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101a54(undefined8 param_1)

{
  FUN_00101a34(param_1);
  return;
}




void FUN_00101f6a(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001029d6(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010248a(local_80);
      local_60 = FUN_00102864(&local_88,&local_78);
      local_70 = FUN_00102ac6(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e5a(local_80);
                    /* try { // try from 00102274 to 001022ff has its CatchHandler @ 001023b7 */
      FUN_001029a1(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e5a(local_80);
      puVar2 = (undefined8 *)FUN_00101ebc(&local_88);
      local_70 = FUN_00102afd(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e5a(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101ebc(&local_88);
      local_70 = FUN_00102afd(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e5a(local_80);
      FUN_00101e6c(*local_80,local_80[1],uVar1);
      FUN_00101e20(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027b2(local_38,param_1,param_4);
                    /* try { // try from 00101ff4 to 001021c7 has its CatchHandler @ 00102399 */
      local_50 = FUN_00102846(local_38);
      local_78 = FUN_00101b5a(local_80);
      local_48 = FUN_00102864(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e5a(local_80);
        FUN_001028a8(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101ebc(&local_88);
        FUN_00102900(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101ebc(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101ebc(&local_88);
        FUN_00102950(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e5a(local_80);
        lVar4 = FUN_001029a1(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e5a(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101ebc(&local_88);
        FUN_001028a8(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101ebc(&local_88);
        FUN_00102950(*puVar2,local_40,local_50);
      }
      FUN_00102812(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102be2(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ac6(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103bef(void)

{
  return;
}




bool FUN_00103d40(pthread_t *param_1)

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




void FUN_00102950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e3c(param_2);
  uVar2 = FUN_00102e3c(param_1);
  FUN_00102e4e(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102ac6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f17(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102bac(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b82(param_1,param_2);
  FUN_00101dde(param_1);
  return;
}




void FUN_00101590(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101638(param_1,2);
  __dest = (undefined4 *)*puVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  memmove(__dest,&local_38,0x28);
  FUN_001036c3(*__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e5a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bce(void)

{
  return;
}




void FUN_00103717(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102721(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c72(param_1,param_2,param_3);
  return;
}




void FUN_001026dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c3c(param_1,param_2,param_3);
  return;
}




void FUN_00102846(undefined8 param_1)

{
  FUN_00102cac(param_1);
  return;
}




void FUN_00103492(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010355b(param_1,param_2,param_3);
  return;
}




void FUN_001027b2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102cc2(param_3);
  uVar2 = FUN_00102cac(param_1);
  FUN_00102cd4(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00102684(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010277e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00103b5c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001027a0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f92(void)

{
  return;
}




undefined8 FUN_00102cc2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102753(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c99(param_1,param_2);
  return;
}




void FUN_00103bc3(void)

{
  return;
}




void FUN_001028a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d3b(param_2);
  uVar2 = FUN_00102d3b(param_1);
  FUN_00102d87(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010302e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



