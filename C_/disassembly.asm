
leap:     file format elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	f3 0f 1e fa          	endbr64
    1004:	48 83 ec 08          	sub    rsp,0x8
    1008:	48 8b 05 d9 2f 00 00 	mov    rax,QWORD PTR [rip+0x2fd9]        # 3fe8 <__gmon_start__@Base>
    100f:	48 85 c0             	test   rax,rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	call   rax
    1016:	48 83 c4 08          	add    rsp,0x8
    101a:	c3                   	ret

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 8a 2f 00 00    	push   QWORD PTR [rip+0x2f8a]        # 3fb0 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	ff 25 8c 2f 00 00    	jmp    QWORD PTR [rip+0x2f8c]        # 3fb8 <_GLOBAL_OFFSET_TABLE_+0x10>
    102c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
    1030:	f3 0f 1e fa          	endbr64
    1034:	68 00 00 00 00       	push   0x0
    1039:	e9 e2 ff ff ff       	jmp    1020 <_init+0x20>
    103e:	66 90                	xchg   ax,ax
    1040:	f3 0f 1e fa          	endbr64
    1044:	68 01 00 00 00       	push   0x1
    1049:	e9 d2 ff ff ff       	jmp    1020 <_init+0x20>
    104e:	66 90                	xchg   ax,ax
    1050:	f3 0f 1e fa          	endbr64
    1054:	68 02 00 00 00       	push   0x2
    1059:	e9 c2 ff ff ff       	jmp    1020 <_init+0x20>
    105e:	66 90                	xchg   ax,ax

Disassembly of section .plt.got:

0000000000001060 <__cxa_finalize@plt>:
    1060:	f3 0f 1e fa          	endbr64
    1064:	ff 25 8e 2f 00 00    	jmp    QWORD PTR [rip+0x2f8e]        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    106a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

Disassembly of section .plt.sec:

0000000000001070 <__stack_chk_fail@plt>:
    1070:	f3 0f 1e fa          	endbr64
    1074:	ff 25 46 2f 00 00    	jmp    QWORD PTR [rip+0x2f46]        # 3fc0 <__stack_chk_fail@GLIBC_2.4>
    107a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

0000000000001080 <printf@plt>:
    1080:	f3 0f 1e fa          	endbr64
    1084:	ff 25 3e 2f 00 00    	jmp    QWORD PTR [rip+0x2f3e]        # 3fc8 <printf@GLIBC_2.2.5>
    108a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

0000000000001090 <__isoc99_scanf@plt>:
    1090:	f3 0f 1e fa          	endbr64
    1094:	ff 25 36 2f 00 00    	jmp    QWORD PTR [rip+0x2f36]        # 3fd0 <__isoc99_scanf@GLIBC_2.7>
    109a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

Disassembly of section .text:

00000000000010a0 <_start>:
    10a0:	f3 0f 1e fa          	endbr64
    10a4:	31 ed                	xor    ebp,ebp
    10a6:	49 89 d1             	mov    r9,rdx
    10a9:	5e                   	pop    rsi
    10aa:	48 89 e2             	mov    rdx,rsp
    10ad:	48 83 e4 f0          	and    rsp,0xfffffffffffffff0
    10b1:	50                   	push   rax
    10b2:	54                   	push   rsp
    10b3:	45 31 c0             	xor    r8d,r8d
    10b6:	31 c9                	xor    ecx,ecx
    10b8:	48 8d 3d ca 00 00 00 	lea    rdi,[rip+0xca]        # 1189 <main>
    10bf:	ff 15 13 2f 00 00    	call   QWORD PTR [rip+0x2f13]        # 3fd8 <__libc_start_main@GLIBC_2.34>
    10c5:	f4                   	hlt
    10c6:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
    10cd:	00 00 00 

00000000000010d0 <deregister_tm_clones>:
    10d0:	48 8d 3d 39 2f 00 00 	lea    rdi,[rip+0x2f39]        # 4010 <__TMC_END__>
    10d7:	48 8d 05 32 2f 00 00 	lea    rax,[rip+0x2f32]        # 4010 <__TMC_END__>
    10de:	48 39 f8             	cmp    rax,rdi
    10e1:	74 15                	je     10f8 <deregister_tm_clones+0x28>
    10e3:	48 8b 05 f6 2e 00 00 	mov    rax,QWORD PTR [rip+0x2ef6]        # 3fe0 <_ITM_deregisterTMCloneTable@Base>
    10ea:	48 85 c0             	test   rax,rax
    10ed:	74 09                	je     10f8 <deregister_tm_clones+0x28>
    10ef:	ff e0                	jmp    rax
    10f1:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    10f8:	c3                   	ret
    10f9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

0000000000001100 <register_tm_clones>:
    1100:	48 8d 3d 09 2f 00 00 	lea    rdi,[rip+0x2f09]        # 4010 <__TMC_END__>
    1107:	48 8d 35 02 2f 00 00 	lea    rsi,[rip+0x2f02]        # 4010 <__TMC_END__>
    110e:	48 29 fe             	sub    rsi,rdi
    1111:	48 89 f0             	mov    rax,rsi
    1114:	48 c1 ee 3f          	shr    rsi,0x3f
    1118:	48 c1 f8 03          	sar    rax,0x3
    111c:	48 01 c6             	add    rsi,rax
    111f:	48 d1 fe             	sar    rsi,1
    1122:	74 14                	je     1138 <register_tm_clones+0x38>
    1124:	48 8b 05 c5 2e 00 00 	mov    rax,QWORD PTR [rip+0x2ec5]        # 3ff0 <_ITM_registerTMCloneTable@Base>
    112b:	48 85 c0             	test   rax,rax
    112e:	74 08                	je     1138 <register_tm_clones+0x38>
    1130:	ff e0                	jmp    rax
    1132:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
    1138:	c3                   	ret
    1139:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

0000000000001140 <__do_global_dtors_aux>:
    1140:	f3 0f 1e fa          	endbr64
    1144:	80 3d c5 2e 00 00 00 	cmp    BYTE PTR [rip+0x2ec5],0x0        # 4010 <__TMC_END__>
    114b:	75 2b                	jne    1178 <__do_global_dtors_aux+0x38>
    114d:	55                   	push   rbp
    114e:	48 83 3d a2 2e 00 00 	cmp    QWORD PTR [rip+0x2ea2],0x0        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    1155:	00 
    1156:	48 89 e5             	mov    rbp,rsp
    1159:	74 0c                	je     1167 <__do_global_dtors_aux+0x27>
    115b:	48 8b 3d a6 2e 00 00 	mov    rdi,QWORD PTR [rip+0x2ea6]        # 4008 <__dso_handle>
    1162:	e8 f9 fe ff ff       	call   1060 <__cxa_finalize@plt>
    1167:	e8 64 ff ff ff       	call   10d0 <deregister_tm_clones>
    116c:	c6 05 9d 2e 00 00 01 	mov    BYTE PTR [rip+0x2e9d],0x1        # 4010 <__TMC_END__>
    1173:	5d                   	pop    rbp
    1174:	c3                   	ret
    1175:	0f 1f 00             	nop    DWORD PTR [rax]
    1178:	c3                   	ret
    1179:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

0000000000001180 <frame_dummy>:
    1180:	f3 0f 1e fa          	endbr64
    1184:	e9 77 ff ff ff       	jmp    1100 <register_tm_clones>

0000000000001189 <main>:
    1189:	f3 0f 1e fa          	endbr64
    118d:	55                   	push   rbp
    118e:	48 89 e5             	mov    rbp,rsp
    1191:	48 83 ec 10          	sub    rsp,0x10
    1195:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
    119c:	00 00 
    119e:	48 89 45 f8          	mov    QWORD PTR [rbp-0x8],rax
    11a2:	31 c0                	xor    eax,eax
    11a4:	48 8d 05 59 0e 00 00 	lea    rax,[rip+0xe59]        # 2004 <_IO_stdin_used+0x4>
    11ab:	48 89 c7             	mov    rdi,rax
    11ae:	b8 00 00 00 00       	mov    eax,0x0
    11b3:	e8 c8 fe ff ff       	call   1080 <printf@plt>
    11b8:	48 8d 45 f4          	lea    rax,[rbp-0xc]
    11bc:	48 89 c6             	mov    rsi,rax
    11bf:	48 8d 05 51 0e 00 00 	lea    rax,[rip+0xe51]        # 2017 <_IO_stdin_used+0x17>
    11c6:	48 89 c7             	mov    rdi,rax
    11c9:	b8 00 00 00 00       	mov    eax,0x0
    11ce:	e8 bd fe ff ff       	call   1090 <__isoc99_scanf@plt>
    11d3:	8b 55 f4             	mov    edx,DWORD PTR [rbp-0xc]
    11d6:	48 63 c2             	movsxd rax,edx
    11d9:	48 69 c0 1f 85 eb 51 	imul   rax,rax,0x51eb851f
    11e0:	48 c1 e8 20          	shr    rax,0x20
    11e4:	c1 f8 07             	sar    eax,0x7
    11e7:	89 d1                	mov    ecx,edx
    11e9:	c1 f9 1f             	sar    ecx,0x1f
    11ec:	29 c8                	sub    eax,ecx
    11ee:	69 c8 90 01 00 00    	imul   ecx,eax,0x190
    11f4:	89 d0                	mov    eax,edx
    11f6:	29 c8                	sub    eax,ecx
    11f8:	85 c0                	test   eax,eax
    11fa:	75 26                	jne    1222 <main+0x99>
    11fc:	8b 55 f4             	mov    edx,DWORD PTR [rbp-0xc]
    11ff:	48 63 c2             	movsxd rax,edx
    1202:	48 69 c0 1f 85 eb 51 	imul   rax,rax,0x51eb851f
    1209:	48 c1 e8 20          	shr    rax,0x20
    120d:	c1 f8 05             	sar    eax,0x5
    1210:	89 d1                	mov    ecx,edx
    1212:	c1 f9 1f             	sar    ecx,0x1f
    1215:	29 c8                	sub    eax,ecx
    1217:	6b c8 64             	imul   ecx,eax,0x64
    121a:	89 d0                	mov    eax,edx
    121c:	29 c8                	sub    eax,ecx
    121e:	85 c0                	test   eax,eax
    1220:	75 0a                	jne    122c <main+0xa3>
    1222:	8b 45 f4             	mov    eax,DWORD PTR [rbp-0xc]
    1225:	83 e0 03             	and    eax,0x3
    1228:	85 c0                	test   eax,eax
    122a:	75 1b                	jne    1247 <main+0xbe>
    122c:	8b 45 f4             	mov    eax,DWORD PTR [rbp-0xc]
    122f:	89 c6                	mov    esi,eax
    1231:	48 8d 05 e2 0d 00 00 	lea    rax,[rip+0xde2]        # 201a <_IO_stdin_used+0x1a>
    1238:	48 89 c7             	mov    rdi,rax
    123b:	b8 00 00 00 00       	mov    eax,0x0
    1240:	e8 3b fe ff ff       	call   1080 <printf@plt>
    1245:	eb 14                	jmp    125b <main+0xd2>
    1247:	48 8d 05 e0 0d 00 00 	lea    rax,[rip+0xde0]        # 202e <_IO_stdin_used+0x2e>
    124e:	48 89 c7             	mov    rdi,rax
    1251:	b8 00 00 00 00       	mov    eax,0x0
    1256:	e8 25 fe ff ff       	call   1080 <printf@plt>
    125b:	b8 00 00 00 00       	mov    eax,0x0
    1260:	48 8b 55 f8          	mov    rdx,QWORD PTR [rbp-0x8]
    1264:	64 48 2b 14 25 28 00 	sub    rdx,QWORD PTR fs:0x28
    126b:	00 00 
    126d:	74 05                	je     1274 <main+0xeb>
    126f:	e8 fc fd ff ff       	call   1070 <__stack_chk_fail@plt>
    1274:	c9                   	leave
    1275:	c3                   	ret

Disassembly of section .fini:

0000000000001278 <_fini>:
    1278:	f3 0f 1e fa          	endbr64
    127c:	48 83 ec 08          	sub    rsp,0x8
    1280:	48 83 c4 08          	add    rsp,0x8
    1284:	c3                   	ret
