
undefined8 FUN_001029c0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023d0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001042ea(undefined8 *param_1)

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




void FUN_00102c57(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031a8(param_1,param_2,param_3);
  return;
}




void FUN_0010355e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001040a2(void)

{
  return;
}




void FUN_00102e36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032f2(param_2);
  uVar2 = FUN_001032f2(param_1);
  FUN_00103304(uVar2,uVar1,param_3);
  return;
}




void FUN_00102c48(void)

{
  return;
}




void FUN_00101735(undefined8 param_1)

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
  piVar2 = (int *)FUN_001017f4(param_1,2);
  iVar1 = *piVar2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00103b97("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103bef(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010210e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00102404(param_1);
  local_18 = FUN_0010245b(&local_38,&local_20);
  local_20 = FUN_001029c0(local_30);
  uVar1 = FUN_00102a0c(&local_20,local_18);
  FUN_001024a0(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001029c0(local_30);
  FUN_00102a0c(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104110(void)

{
  return;
}




void FUN_001032bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010357c(param_1,param_2,param_3);
  return;
}




void FUN_00101eb9(void)

{
  FUN_00101aab();
  FUN_00101c26();
  return;
}




undefined8 FUN_00102090(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023d0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102048(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102390(param_1);
  FUN_001023a2(*param_1,param_1[1],uVar1);
  FUN_00101ff6(param_1);
  return;
}




void FUN_00104131(void)

{
  return;
}




void FUN_001040e4(void)

{
  return;
}




void FUN_00104126(void)

{
  return;
}




void FUN_00104168(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103bbd(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101f8a(undefined8 param_1)

{
  FUN_00101f6a(param_1);
  return;
}




undefined4 * FUN_00103956(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_00104363(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001022f4(undefined8 param_1)

{
  FUN_00102c48(param_1);
  return;
}




void FUN_001040ce(void)

{
  return;
}




void FUN_00102ce8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_001031f8(param_3);
  uVar2 = FUN_001031e2(param_1);
  FUN_0010320a(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010411b(void)

{
  return;
}




void FUN_00103033(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103477(param_2);
  uVar2 = FUN_00103477(param_1);
  FUN_001032bd(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102c89(undefined8 param_1,undefined8 param_2)

{
  FUN_001031cf(param_1,param_2);
  return;
}




void FUN_00103dc6(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_001031e2(long param_1)

{
  return param_1 + 8;
}




void FUN_00103bef(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101fd6(undefined8 param_1)

{
  FUN_00102346(param_1);
  return;
}




ulong * FUN_0010341a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_0010406a(void)

{
  return 1;
}




void FUN_001035b1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010375d(param_1,param_2,param_3);
  return;
}




void FUN_00104382(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103118(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ffc(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




ulong FUN_00103e87(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e86(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103372(param_2);
  uVar2 = FUN_00103372(param_1);
  FUN_00103384(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102390(undefined8 param_1)

{
  return param_1;
}




void FUN_00104440(void)

{
  return;
}




undefined8 FUN_00102b62(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102cb4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001035e6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102bba(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102cb4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103372(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102cd6(undefined8 param_1)

{
  return param_1;
}




void FUN_001043d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101faa(undefined8 param_1)

{
  FUN_001022f4(param_1);
  FUN_00102314(param_1);
  return;
}




void FUN_00101ff6(long *param_1)

{
  FUN_00102356(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101f4a(param_1);
  return;
}




long FUN_0010245b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102cd6(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102cd6(param_2);
  return lVar1 - *plVar2 >> 2;
}




void * FUN_00103a87(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




undefined8 FUN_00102a0c(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_001023d0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103271(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010355e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101aab(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f8a(local_58);
  local_64 = 7;
  local_60 = FUN_00102090(local_58);
  FUN_001020e0(local_38,&local_60);
                    /* try { // try from 00101b1b to 00101bb0 has its CatchHandler @ 00101bfc */
  FUN_0010210e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102090(local_58);
  FUN_001020e0(local_38,&local_60);
  FUN_0010210e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102090(local_58);
  FUN_001020e0(local_38,&local_60);
  FUN_0010210e(local_58,local_38[0],1,&local_64);
  FUN_001021d4(local_38,local_58);
                    /* try { // try from 00101bb8 to 00101bbc has its CatchHandler @ 00101be7 */
  FUN_0010167f(local_38);
  FUN_00102048(local_38);
  FUN_00102048(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103906(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001039f3(param_2);
  uVar2 = FUN_001039f3(param_1);
  FUN_00103a19(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001042c7(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001040ef(void)

{
  return;
}




void FUN_001043a1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101c26(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined local_88 [32];
  undefined8 local_68 [4];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f8a(local_88);
  local_9c = -1;
  local_98 = 0xffffffff;
  local_98 = socket(2,1,6);
  if (local_98 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00101cd9 to 00101e40 has its CatchHandler @ 00101e8c */
    iVar1 = connect(local_98,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_98,local_2e,0xd,0);
      local_94 = (int)sVar2;
      if ((local_94 != -1) && (local_94 != 0)) {
        local_2e[local_94] = '\0';
        local_9c = atoi(local_2e);
      }
    }
  }
  if (local_98 != -1) {
    close(local_98);
  }
  local_90 = FUN_00102090(local_88);
  FUN_001020e0(local_68,&local_90);
  FUN_0010210e(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00102090(local_88);
  FUN_001020e0(local_68,&local_90);
  FUN_0010210e(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00102090(local_88);
  FUN_001020e0(local_68,&local_90);
  FUN_0010210e(local_88,local_68[0],1,&local_9c);
  FUN_001021d4(local_68,local_88);
                    /* try { // try from 00101e48 to 00101e4c has its CatchHandler @ 00101e77 */
  FUN_00101735(local_68);
  FUN_00102048(local_68);
  FUN_00102048(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Removing unreachable block (ram,0x00101523) */
/* WARNING: Removing unreachable block (ram,0x0010152f) */

void FUN_00101510(void)

{
  return;
}




void FUN_001037d3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103372(param_1);
  uVar1 = FUN_00103956(uVar1,param_2,param_3);
  FUN_001035e6(&local_10,uVar1);
  return;
}




undefined8 FUN_00101ece(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b97("Calling good()...");
  FUN_00101eb9();
  FUN_00103b97("Finished good()");
  FUN_00103b97("Calling bad()...");
  FUN_00101818();
  FUN_00103b97("Finished bad()");
  return 0;
}




void FUN_00103508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_001031f8(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101f33(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102dde(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103271(param_2);
  uVar2 = FUN_00103271(param_1);
  FUN_001032bd(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102ed7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033be(param_1,param_2,param_3);
  return;
}




ulong FUN_00103f8b(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00105108,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001023a2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c89(param_1,param_2);
  return;
}




void FUN_0010372c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103906(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104079(void)

{
  return 0;
}




void FUN_00102cb4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010415d(void)

{
  return;
}




void FUN_00103e27(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long FUN_001017f4(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




undefined8 FUN_00103aea(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103449(undefined8 param_1,undefined8 param_2)

{
  FUN_00103696(param_1,param_2,0);
  return;
}




void FUN_00103c98(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001020e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001023f2(param_2);
  *param_1 = *puVar1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101564) */
/* WARNING: Removing unreachable block (ram,0x00101570) */

void FUN_00101540(void)

{
  return;
}




void FUN_001035fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037d3(param_1,param_2,param_3);
  return;
}




void FUN_00102314(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




bool FUN_0010426c(pthread_t *param_1)

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




void FUN_00102d48(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001031e2(param_1);
  FUN_00103247(*param_1,uVar1);
  return;
}




undefined8 FUN_00102a99(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010308b(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102404(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102cb4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001033f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aea(param_1);
  FUN_0010362d(uVar1);
  return;
}




void FUN_001040d9(void)

{
  return;
}




void FUN_001031a8(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00104147(void)

{
  return;
}




void FUN_00101f4a(undefined8 param_1)

{
  FUN_00101fd6(param_1);
  return;
}




void FUN_0010167f(undefined8 param_1)

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
  piVar1 = (int *)FUN_001017f4(param_1,2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103bef(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103b97("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103477(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010355e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030e2(param_1,param_3);
                    /* try { // try from 00102b36 to 00102b3a has its CatchHandler @ 00102b3d */
  FUN_00103118(param_1,param_2);
  return;
}




void FUN_00103c6d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104152(void)

{
  return;
}




void FUN_001036dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103886(param_2);
  uVar2 = FUN_00103886(param_1);
  FUN_00103898(uVar2,uVar1,param_3);
  return;
}




void FUN_0010320a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001031f8(param_3);
  FUN_00103508(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00103886(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00102f0c(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001033f4(param_1);
  lVar2 = FUN_00102a72(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102a72(local_40);
  local_30 = FUN_00102a72(local_40);
  plVar3 = (long *)FUN_0010341a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102a72(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001033f4(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001033f4(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0010362d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00103821(param_1);
  puVar1 = (undefined8 *)FUN_0010383f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001023d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00101f33(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102c12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103172(param_1,param_2,param_3);
  return;
}




void FUN_00103aff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103b34(param_1,param_2,param_3);
  return;
}




void FUN_00103a19(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103372(param_3);
  uVar2 = FUN_00103372(local_28);
  uVar3 = FUN_00103372(local_20);
  uVar1 = FUN_00103aff(uVar3,uVar2,uVar1);
  FUN_001035e6(&local_30,uVar1);
  return;
}




void FUN_001034c4(void)

{
  return;
}




void FUN_001040fa(void)

{
  return;
}




void FUN_0010354a(void)

{
  return;
}




undefined8 FUN_0010419f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104168,local_18);
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




void FUN_00103696(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010386e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_001040b8(void)

{
  return;
}




void FUN_00103d73(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103384(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001021d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102aea(param_2);
  FUN_00102a99(&local_31,uVar1);
  uVar1 = FUN_00102a72(param_2);
                    /* try { // try from 0010223a to 0010223e has its CatchHandler @ 001022a7 */
  FUN_00102afc(param_1,uVar1,&local_31);
  FUN_00101fd6(&local_31);
  uVar2 = FUN_00102390(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102bba(param_2);
  uVar4 = FUN_00102b62(param_2);
                    /* try { // try from 00102288 to 0010228c has its CatchHandler @ 001022c5 */
  uVar1 = FUN_00102c12(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103df4(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001030e2(undefined8 param_1,undefined8 param_2)

{
  FUN_001030b8(param_1,param_2);
  FUN_00102314(param_1);
  return;
}




void FUN_00103821(undefined8 param_1)

{
  FUN_0010386e(param_1);
  return;
}




void FUN_00103c17(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001031f8(undefined8 param_1)

{
  return param_1;
}




int FUN_00104088(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001039f3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103aea(&local_10);
  FUN_001032f2(uVar1);
  return;
}




void FUN_00103cee(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102d7c(undefined8 param_1)

{
  FUN_001031e2(param_1);
  return;
}




undefined8 FUN_001023f2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103372(param_3);
  uVar2 = FUN_00103372(local_28);
  uVar3 = FUN_00103372(local_20);
  uVar1 = FUN_001035b1(uVar3,uVar2,uVar1);
  FUN_001035e6(&local_30,uVar1);
  return;
}




void FUN_001040ad(void)

{
  return;
}




void FUN_001033be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035fc(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102ffc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103449(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103247(undefined8 param_1,undefined8 param_2)

{
  FUN_0010354a(param_1,param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ea8)();
  return;
}




void FUN_00101f6a(undefined8 param_1)

{
  FUN_00101faa(param_1);
  return;
}




void FUN_0010413c(void)

{
  return;
}




void FUN_00102356(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102c57(param_1,param_2,param_3);
  }
  return;
}




void * FUN_00103b34(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103cc3(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001024a0(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102f0c(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001029c0(local_80);
      local_60 = FUN_00102d9a(&local_88,&local_78);
      local_70 = FUN_00102ffc(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00102390(local_80);
                    /* try { // try from 001027aa to 00102835 has its CatchHandler @ 001028ed */
      FUN_00102ed7(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00102390(local_80);
      puVar2 = (undefined8 *)FUN_001023f2(&local_88);
      local_70 = FUN_00103033(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00102390(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001023f2(&local_88);
      local_70 = FUN_00103033(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00102390(local_80);
      FUN_001023a2(*local_80,local_80[1],uVar1);
      FUN_00102356(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102ce8(local_38,param_1,param_4);
                    /* try { // try from 0010252a to 001026fd has its CatchHandler @ 001028cf */
      local_50 = FUN_00102d7c(local_38);
      local_78 = FUN_00102090(local_80);
      local_48 = FUN_00102d9a(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00102390(local_80);
        FUN_00102dde(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_001023f2(&local_88);
        FUN_00102e36(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001023f2(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001023f2(&local_88);
        FUN_00102e86(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00102390(local_80);
        lVar4 = FUN_00102ed7(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00102390(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001023f2(&local_88);
        FUN_00102dde(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_001023f2(&local_88);
        FUN_00102e86(*puVar2,local_40,local_50);
      }
      FUN_00102d48(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d9b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001040c3(void)

{
  return;
}




undefined8 FUN_00102aea(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101510();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_001031cf(void)

{
  return;
}




void FUN_00103b97(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103372(param_3);
  uVar2 = FUN_0010399d(local_28);
  uVar3 = FUN_0010399d(local_20);
  uVar1 = FUN_001039be(uVar3,uVar2,uVar1);
  FUN_001035e6(&local_30,uVar1);
  return;
}




long FUN_0010375d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00104105(void)

{
  return;
}




void FUN_00103172(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034d7(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010386e(void)

{
  return 0x1fffffffffffffff;
}




undefined8 FUN_001032f2(undefined8 param_1)

{
  return param_1;
}




void FUN_001030b8(undefined8 param_1,undefined8 param_2)

{
  FUN_001034c4(param_1,param_2);
  return;
}




long FUN_00102a72(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_0010357c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010372c(param_1,param_2,param_3);
  return;
}




void FUN_00103c43(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong * FUN_0010383f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001039be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103a87(param_1,param_2,param_3);
  return;
}




void FUN_00102346(void)

{
  return;
}




void FUN_00103d19(undefined4 param_1)

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




undefined8 FUN_0010399d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102cd6(&local_10);
  return *puVar1;
}




long FUN_00102d9a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001023f2(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001023f2(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_001015c9(undefined8 param_1)

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
  piVar1 = (int *)FUN_001017f4(param_1,2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103bef(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103b97("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010308b(undefined8 param_1,undefined8 param_2)

{
  FUN_001030b8(param_1,param_2);
  return param_1;
}




void FUN_001034d7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036dc(param_1,param_2,param_3);
  return;
}




void FUN_00101818(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined local_88 [32];
  undefined8 local_68 [4];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f8a(local_88);
  local_9c = -1;
  local_98 = 0xffffffff;
  local_98 = socket(2,1,6);
  if (local_98 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 001018cb to 00101a32 has its CatchHandler @ 00101a7e */
    iVar1 = connect(local_98,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_98,local_2e,0xd,0);
      local_94 = (int)sVar2;
      if ((local_94 != -1) && (local_94 != 0)) {
        local_2e[local_94] = '\0';
        local_9c = atoi(local_2e);
      }
    }
  }
  if (local_98 != -1) {
    close(local_98);
  }
  local_90 = FUN_00102090(local_88);
  FUN_001020e0(local_68,&local_90);
  FUN_0010210e(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00102090(local_88);
  FUN_001020e0(local_68,&local_90);
  FUN_0010210e(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00102090(local_88);
  FUN_001020e0(local_68,&local_90);
  FUN_0010210e(local_88,local_68[0],1,&local_9c);
  FUN_001021d4(local_68,local_88);
                    /* try { // try from 00101a3a to 00101a3e has its CatchHandler @ 00101a69 */
  FUN_001015c9(local_68);
  FUN_00102048(local_68);
  FUN_00102048(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



